#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "core/interfaces.hpp"
#include "object/foot.hpp"

namespace gamemd {

using ra2::game::AbstractClass;
using ra2::game::AbstractType;

class AircraftTypeClass;

class StageClass : public IFlyControl
{
public:
    virtual int __stdcall Landing_Altitude() override { return 0; }
    virtual int __stdcall Landing_Direction() override { return 0; }
    virtual long __stdcall Is_Loaded() override { return 0; }
    virtual long __stdcall Is_Strafe() override { return 0; }
    virtual long __stdcall Is_Fighter() override { return 0; }
    virtual long __stdcall Is_Locked() override { return 0; }
};

class FlasherClass : public StageClass
{
};

class AircraftClass : public ra2::game::FootClass, public FlasherClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Aircraft;

    virtual int __stdcall Landing_Altitude() override { return 0; }
    virtual int __stdcall Landing_Direction() override { return 0; }
    virtual long __stdcall Is_Loaded() override { return 0; }
    virtual long __stdcall Is_Strafe() override { return 0; }
    virtual long __stdcall Is_Fighter() override { return 0; }
    virtual long __stdcall Is_Locked() override { return 0; }

    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppvObject) override { return E_NOINTERFACE; }
    virtual ULONG __stdcall AddRef() override { return 0; }
    virtual ULONG __stdcall Release() override { return 0; }

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }
    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual AbstractType __stdcall whatAmI() const override { return kObjectTypeId; }
    virtual int objectSize() const override { return sizeof(AircraftClass); }

    virtual ~AircraftClass() override = default;

    // === Phase 3: Missions ===
    int Mission_Attack() override;
    int Mission_Return() override;
    int Mission_Unload() override;
    int Mission_Hunt() override;
    int Mission_Retreat() override;
    int Mission_Enter() override;
    int Mission_Transport();
    int MissionDispatch();

    // === Phase 3: Flight Paths ===
    int MoveTo();
    int ValidateMovement();
    bool CanEnterCell();

    // === Phase 3: Landing ===
    int ProcessLanding();
    int FindLandingCell();
    int ValidateLandingCell();
    int ProcessReturnToBase();
    int CheckLandingClearance();
    int Mission_Unload_full();
    int LandingCheckStub();

    // === Phase 3: Paradrop ===
    int ProcessPassengerEjection();
    int CheckPassengerCount();

    // === Phase 3: Spawn/Dock ===
    int ProcessDockCheck();
    int UpdateDocking();
    int CheckDockState();
    int CheckReloadState();
    int CheckReloadTimer();

    // === Phase 3: Per-Frame & AI ===
    void PowerDrainUpdate() override;
    virtual int HandleTargetDestroyed();
    int ProcessMissionTimeout();
    int GetMissionTimer();
    int EvaluateTargetingState();
    virtual int AssignDestination_SyncLog();
    int OverrideMission_SyncLog();
    int RevealSight();
    int DeployWithAnim();
    int PowerDrainProcess();

    // === Phase 3: Stream ===
    virtual int LoadFromStream();
    void Destruct();

    // === Phase 3: Cursor & State ===
    virtual int GetCursorOverObject();
    int IsHeightAboveThreshold();
    int IsBelowScreen();
    int CheckMissionAbort();
    int CheckMissionFail();
    int CheckActionStatus();
    int CheckMissionStatus();
    int CheckMissionStatus2();
    int CheckStateFlag();
    int CheckStateFlag2();

    // === Phase 3: Stubs ===
    bool StubReturnFalse2() override;
    bool StubReturnFalse3();
    bool StubReturnFalse4();
    bool StubReturnTrue();
    int MissionStubReturnZero();
    int MissionStubReturnZero2();
    int MissionStubReturnZero3();

    // === Phase 3: Drawing ===
    void Draw(Point2D* screen_pos, RectangleStruct* bounds) const;
    void DrawShadow(Point2D* screen_pos, RectangleStruct* bounds) const;
    void DrawJetExhaust(Point2D* screen_pos) const;

    AircraftTypeClass* Type;
    bool               AircraftClass_field_bool_6C8;
    bool               HasPassengers;
    bool               IsKamikaze;
    uint32_t           AircraftClass_field_6CC;
    bool               AircraftClass_field_bool_6D0;
    bool               AircraftClass_field_bool_6D1;
    bool               AircraftClass_field_bool_6D2;
    char               AircraftClass_field_char_6D3;
    bool               AircraftClass_field_bool_6D4;
    bool               AircraftClass_field_bool_6D5;

protected:
    AircraftClass() noexcept;
};

} // namespace gamemd
