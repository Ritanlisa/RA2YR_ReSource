#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "object/foot.hpp"

namespace gamemd {

using ra2::game::AbstractClass;
using ra2::game::AbstractType;
using ra2::game::Point2D;
using ra2::game::RectangleStruct;

class EBolt;
class UnitTypeClass;

class UnitClass : public ra2::game::FootClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Unit;

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;  // 0x6B4F50
    // wrapper: delegates to UnitClass::GetClassID at 0x6B4F50
    virtual HRESULT __stdcall Load(IStream* pStm) override;
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;

    // wrapper: delegates to UnitClass::GetClassID at 0x6B4F50
    virtual ~UnitClass() override = default;

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // design: virtual function, no binary implementation matched in IDA
    virtual int objectSize() const override;

    // unmatched: no callgraph reference and no git history record
    virtual void DrawAsVXL(Point2D* coords, RectangleStruct* bounding_rect, uint32_t dwUnk7, uint32_t dwUnk8);
    // unmatched: no callgraph reference and no git history record
    virtual void DrawAsSHP(Point2D* coords, RectangleStruct* bounding_rect, uint32_t dwUnk7, uint32_t dwUnk8);

    // === Phase 3: Harvest/Unload ===
    int Mission_Harvest() override;
    int Mission_Unload() override;
    int ProcessResourceHarvesting();  // 0x73D450
    int updateHarvesting();  // 0x4C2C10
    int UnloadPassengers();  // 0x6B4BE0
    int ProcessExitQueue();  // 0x6B7230
    int CreateUnloadPlacementCraters(CellStruct* cell);  // 0x6B6080
    int GetExitCell();  // 0x54E3B0

    // === Phase 3: Deploy ===
    int Deploy();  // 0x7192F0
    int DeployToBuilding();  // 0x738D30
    int SimpleDeployerDeploy();  // 0x739AC0
    int SimpleDeployerUndeploy();  // 0x739CD0
    int MissionDispatch();  // 0x737430

    // === Phase 3: Movement ===
    virtual int CalcMoveTarget();  // 0x7359F0
    virtual int AssignDestination_SyncLog();  // 0x741970
    virtual int ApproachTarget_DisallowMoving();  // 0x7414E0
    int UpdateRotation_TurretFacing_EMP();  // 0x736990
    int Scatter(CellStruct* threatPos, bool a3, bool a4);  // 0x743A50
    int IsCellBlockedByBridge();  // 0x458A00
    int CompareCoordinateMagnitude();  // 0x4D03D0
    int processEnterTarget();  // 0x7178B0
    int CheckForNearbyEnemies();  // 0x7468C0
    int OnUnderAttack(ObjectClass* attacker, int damage, int weaponIdx, CellStruct* sourceCell, int a8, bool a9, void* a10);  // 0x737C90

    // === Phase 3: Weapon Switching ===
    int SetTurret();  // 0x70DC70
    virtual int EvaluateTarget();  // 0x73F0A0
    bool CanCrushTarget();  // 0x7438F0
    int IsDeactivated();  // 0x70FBD0

    // === Phase 3: Construction & Destruct ===
    static int Create();  // 0x6B4A50
    int ReadINI();  // 0x6B4C80
    int DestroySmudge();  // 0x6B4FA0
    void Destructor();  // 0x735780

    // === Phase 3: Stream & Save ===
    virtual int LoadFromStream();  // 0x744470
    virtual int SaveLoadData();  // 0x6B4EA0
    virtual int SaveState();  // 0x6B4F00

    // === Phase 3: Per-Frame & AI ===
    void PowerDrainUpdate() override;  // 0x744640
    virtual int PerFrameUpdate();  // 0x746810
    virtual int HandleTargetDestroyed();  // 0x7446E0
    int CheckStatus();  // 0x6B4F20
    int ClearTargetRef();  // 0x6B7C60
    int ProcessIdleOrders();  // 0x6B7BB0
    int StubReturn176();  // 0x6B4F30
    int StubReturn29();  // 0x6B4F40

    // === Phase 3: Approach Evaluate ===
    int ApproachEvaluate();  // 0x4D4280

    // === Phase 3: Drawing ===
    // wrapper: delegates to UnitClass::ApproachEvaluate at 0x4D4280
    void Draw(Point2D* screen_pos, RectangleStruct* bounds) const;
    // wrapper: delegates to UnitClass::ApproachEvaluate at 0x4D4280
    void DrawVoxel(Point2D* screen_pos, RectangleStruct* bounds) const;
    // wrapper: delegates to UnitClass::ApproachEvaluate at 0x4D4280
    void DrawPlacementPreview(Point2D* screen_pos, RectangleStruct* bounds) const;

    int32_t            UnitClass_field_int_6C0;
    UnitTypeClass*     Type;
    UnitClass*         FollowerCar;
    int32_t            FlagHouseIndex;
    bool               HasFollowerCar;
    bool               Unloading;
    bool               UnitClass_field_bool_6D2;
    bool               TerrainPalette;
    int32_t            UnitClass_field_int_6D4;
    int32_t            DeathFrameCounter;
    EBolt*             ElectricBolt;
    bool               Deployed;
    bool               Deploying;
    bool               Undeploying;
    int32_t            NonPassengerCount;
    wchar_t            ToolTipText[0x100];

protected:
    UnitClass() noexcept;
};

} // namespace gamemd
