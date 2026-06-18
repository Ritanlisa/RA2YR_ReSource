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

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }
    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual ~UnitClass() override = default;

    virtual AbstractType __stdcall whatAmI() const override { return kObjectTypeId; }
    virtual int objectSize() const override { return sizeof(UnitClass); }

    virtual void DrawAsVXL(Point2D* coords, RectangleStruct* bounding_rect, uint32_t dwUnk7, uint32_t dwUnk8) {}
    virtual void DrawAsSHP(Point2D* coords, RectangleStruct* bounding_rect, uint32_t dwUnk7, uint32_t dwUnk8) {}

    // === Phase 3: Harvest/Unload ===
    int Mission_Harvest() override;
    int Mission_Unload() override;
    int ProcessResourceHarvesting();
    int updateHarvesting();
    int UnloadPassengers();
    int ProcessExitQueue();
    int CreateUnloadPlacementCraters();
    int GetExitCell();

    // === Phase 3: Deploy ===
    int Deploy();
    int DeployToBuilding();
    int SimpleDeployerDeploy();
    int SimpleDeployerUndeploy();
    int MissionDispatch();

    // === Phase 3: Movement ===
    virtual int CalcMoveTarget();
    virtual int AssignDestination_SyncLog();
    virtual int ApproachTarget_DisallowMoving();
    int UpdateRotation_TurretFacing_EMP();
    int Scatter();
    int IsCellBlockedByBridge();
    int CompareCoordinateMagnitude();
    int processEnterTarget();
    int CheckForNearbyEnemies();
    int OnUnderAttack();

    // === Phase 3: Weapon Switching ===
    int SetTurret();
    virtual int EvaluateTarget();
    bool CanCrushTarget();
    int IsDeactivated();

    // === Phase 3: Construction & Destruct ===
    static int Create();
    int ReadINI();
    int DestroySmudge();
    void Destructor();

    // === Phase 3: Stream & Save ===
    virtual int LoadFromStream();
    virtual int SaveLoadData();
    virtual int SaveState();

    // === Phase 3: Per-Frame & AI ===
    void PowerDrainUpdate() override;
    virtual int PerFrameUpdate();
    virtual int HandleTargetDestroyed();
    int CheckStatus();
    int ClearTargetRef();
    int ProcessIdleOrders();
    int StubReturn176();
    int StubReturn29();

    // === Phase 3: Approach Evaluate ===
    int ApproachEvaluate();

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
