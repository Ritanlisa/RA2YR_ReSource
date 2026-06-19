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

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;  // 0x6b4f50
    virtual HRESULT __stdcall Load(IStream* pStm) override;
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;

    virtual ~UnitClass() override = default;

    virtual AbstractType __stdcall whatAmI() const override;
    virtual int objectSize() const override;

    virtual void DrawAsVXL(Point2D* coords, RectangleStruct* bounding_rect, uint32_t dwUnk7, uint32_t dwUnk8);
    virtual void DrawAsSHP(Point2D* coords, RectangleStruct* bounding_rect, uint32_t dwUnk7, uint32_t dwUnk8);

    // === Phase 3: Harvest/Unload ===
    int Mission_Harvest() override;
    int Mission_Unload() override;
    int ProcessResourceHarvesting();  // 0x73d450
    int updateHarvesting();  // 0x4c2c10
    int UnloadPassengers();  // 0x6b4be0
    int ProcessExitQueue();  // 0x6b7230
    int CreateUnloadPlacementCraters();  // 0x6b6080
    int GetExitCell();  // 0x54e3b0

    // === Phase 3: Deploy ===
    int Deploy();  // 0x7192f0
    int DeployToBuilding();  // 0x738d30
    int SimpleDeployerDeploy();  // 0x739ac0
    int SimpleDeployerUndeploy();  // 0x739cd0
    int MissionDispatch();  // 0x737430

    // === Phase 3: Movement ===
    virtual int CalcMoveTarget();  // 0x7359f0
    virtual int AssignDestination_SyncLog();  // 0x741970
    virtual int ApproachTarget_DisallowMoving();  // 0x7414e0
    int UpdateRotation_TurretFacing_EMP();  // 0x736990
    int Scatter();  // 0x743a50
    int IsCellBlockedByBridge();  // 0x458a00
    int CompareCoordinateMagnitude();  // 0x4d03d0
    int processEnterTarget();  // 0x7178b0
    int CheckForNearbyEnemies();  // 0x7468c0
    int OnUnderAttack();  // 0x737c90

    // === Phase 3: Weapon Switching ===
    int SetTurret();  // 0x70dc70
    virtual int EvaluateTarget();  // 0x73f0a0
    bool CanCrushTarget();  // 0x7438f0
    int IsDeactivated();  // 0x70fbd0

    // === Phase 3: Construction & Destruct ===
    static int Create();  // 0x6b4a50
    int ReadINI();  // 0x6b4c80
    int DestroySmudge();  // 0x6b4fa0
    void Destructor();  // 0x735780

    // === Phase 3: Stream & Save ===
    virtual int LoadFromStream();  // 0x744470
    virtual int SaveLoadData();  // 0x6b4ea0
    virtual int SaveState();  // 0x6b4f00

    // === Phase 3: Per-Frame & AI ===
    void PowerDrainUpdate() override;  // 0x744640
    virtual int PerFrameUpdate();  // 0x746810
    virtual int HandleTargetDestroyed();  // 0x7446e0
    int CheckStatus();  // 0x6b4f20
    int ClearTargetRef();  // 0x6b7c60
    int ProcessIdleOrders();  // 0x6b7bb0
    int StubReturn176();  // 0x6b4f30
    int StubReturn29();  // 0x6b4f40

    // === Phase 3: Approach Evaluate ===
    int ApproachEvaluate();  // 0x4d4280

    // === Phase 3: Drawing ===
    void Draw(Point2D* screen_pos, RectangleStruct* bounds) const;
    void DrawVoxel(Point2D* screen_pos, RectangleStruct* bounds) const;
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
