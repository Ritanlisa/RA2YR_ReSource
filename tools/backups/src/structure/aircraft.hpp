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
    virtual int __stdcall Landing_Altitude() override;
    virtual int __stdcall Landing_Direction() override;
    virtual long __stdcall Is_Loaded() override;
    virtual long __stdcall Is_Strafe() override;
    virtual long __stdcall Is_Fighter() override;
    virtual long __stdcall Is_Locked() override;
};

class FlasherClass : public StageClass
{
};

class AircraftClass : public ra2::game::FootClass, public FlasherClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Aircraft;

    virtual int __stdcall Landing_Altitude() override;
    virtual int __stdcall Landing_Direction() override;
    virtual long __stdcall Is_Loaded() override;
    virtual long __stdcall Is_Strafe() override;
    virtual long __stdcall Is_Fighter() override;
    virtual long __stdcall Is_Locked() override;

    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppvObject) override;  // 0x414290
    virtual ULONG __stdcall AddRef() override;  // 0x4142f0
    virtual ULONG __stdcall Release() override;  // 0x414300

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;
    virtual HRESULT __stdcall Load(IStream* pStm) override;
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;

    virtual AbstractType __stdcall whatAmI() const override;
    virtual int objectSize() const override;

    virtual ~AircraftClass() override = default;

    // === Phase 3: Missions ===
    int Mission_Attack() override;  // 0x417fe0
    int Mission_Return() override;
    int Mission_Unload() override;  // 0x4151e0
    int Mission_Hunt() override;
    int Mission_Retreat() override;
    int Mission_Enter() override;  // 0x4166c0
    int Mission_Transport();  // 0x419c80
    int MissionDispatch();  // 0x4190b0

    // === Phase 3: Flight Paths ===
    int MoveTo();  // 0x414310
    int ValidateMovement();  // 0x417bd0
    bool CanEnterCell();  // 0x417f80

    // === Phase 3: Landing ===
    int ProcessLanding();  // 0x41ba90
    int FindLandingCell();  // 0x415b10
    int ValidateLandingCell();  // 0x4196b0
    int ProcessReturnToBase();  // 0x415a50
    int CheckLandingClearance();  // 0x41a590
    int Mission_Unload_full();
    int LandingCheckStub();  // 0x41be60

    // === Phase 3: Paradrop ===
    int ProcessPassengerEjection();  // 0x41b870
    int CheckPassengerCount();  // 0x41b5c0

    // === Phase 3: Spawn/Dock ===
    int ProcessDockCheck();  // 0x41adc0
    int UpdateDocking();  // 0x41b9f0
    int CheckDockState();  // 0x41c070
    int CheckReloadState();  // 0x41c010
    int CheckReloadTimer();  // 0x41c020

    // === Phase 3: Per-Frame & AI ===
    void PowerDrainUpdate() override;  // 0x41b610
    virtual int HandleTargetDestroyed();  // 0x41b660
    int ProcessMissionTimeout();  // 0x414a80
    int GetMissionTimer();  // 0x41a5c0
    int EvaluateTargetingState();  // 0x41a940
    virtual int AssignDestination_SyncLog();  // 0x41aa80
    int OverrideMission_SyncLog();  // 0x41bb30
    int RevealSight();  // 0x41adf0
    int DeployWithAnim();  // 0x4165c0
    int PowerDrainProcess();  // 0x41c190

    // === Phase 3: Stream ===
    virtual int LoadFromStream();  // 0x41b430
    void Destruct();  // 0x414080

    // === Phase 3: Cursor & State ===
    virtual int GetCursorOverObject();  // 0x417cc0
    int IsHeightAboveThreshold();  // 0x41b920
    int IsBelowScreen();  // 0x41b980
    int CheckMissionAbort();  // 0x41c1d0
    int CheckMissionFail();  // 0x41c200
    int CheckActionStatus();  // 0x41c210
    int CheckMissionStatus();  // 0x5b2e90
    int CheckMissionStatus2();  // 0x5b2f30
    int CheckStateFlag();  // 0x41be80
    int CheckStateFlag2();  // 0x41be90

    // === Phase 3: Stubs ===
    bool StubReturnFalse2() override;  // 0x41be70
    bool StubReturnFalse3();  // 0x5f43b0
    bool StubReturnFalse4();  // 0x5f43f0
    bool StubReturnTrue();  // 0x5f43c0
    int MissionStubReturnZero();  // 0x41b910
    int MissionStubReturnZero2();  // 0x41c170
    int MissionStubReturnZero3();  // 0x41c180

    // === Phase 3: Drawing ===
    void Draw(Point2D* screen_pos, RectangleStruct* bounds) const;  // 0x4144b0
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
