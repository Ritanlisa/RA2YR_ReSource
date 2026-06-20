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
    virtual int __stdcall Landing_Altitude() override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int __stdcall Landing_Direction() override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual long __stdcall Is_Loaded() override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual long __stdcall Is_Strafe() override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual long __stdcall Is_Fighter() override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual long __stdcall Is_Locked() override;
};

class FlasherClass : public StageClass
{
};

class AircraftClass : public ra2::game::FootClass, public FlasherClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Aircraft;

    virtual int __stdcall Landing_Altitude() override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int __stdcall Landing_Direction() override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual long __stdcall Is_Loaded() override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual long __stdcall Is_Strafe() override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual long __stdcall Is_Fighter() override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual long __stdcall Is_Locked() override; // IDA: NOT_FOUND

    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppvObject) override;  // 0x414290
    virtual ULONG __stdcall AddRef() override;  // 0x4142F0
    virtual ULONG __stdcall Release() override;  // 0x414300

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override; // IDA: NOT_FOUND
    virtual HRESULT __stdcall Load(IStream* pStm) override; // IDA: NOT_FOUND
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    virtual AbstractType __stdcall whatAmI() const override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int objectSize() const override; // IDA: NOT_FOUND

    virtual ~AircraftClass() override = default;  // 0x414080

    // === Phase 3: Missions ===
    int Mission_Attack() override;  // 0x417FE0
    int Mission_Return() override; // IDA: NOT_FOUND
    int Mission_Unload() override;  // 0x4151E0
    int Mission_Hunt() override; // IDA: NOT_FOUND
    int Mission_Retreat() override; // IDA: NOT_FOUND
    int Mission_Enter() override;  // 0x4166C0
    int Mission_Transport();  // 0x419C80
    int MissionDispatch();  // 0x4190B0

    // === Phase 3: Flight Paths ===
    int MoveTo();  // 0x414310
    int ValidateMovement();  // 0x417BD0
    bool CanEnterCell();  // 0x417F80

    // === Phase 3: Landing ===
    int ProcessLanding();  // 0x41BA90
    int FindLandingCell();  // 0x415B10
    int ValidateLandingCell();  // 0x4196B0
    int ProcessReturnToBase();  // 0x415A50
    int CheckLandingClearance();  // 0x41A590
    int Mission_Unload_full(); // IDA: NOT_FOUND
    int LandingCheckStub();  // 0x41BE60

    // === Phase 3: Paradrop ===
    int ProcessPassengerEjection();  // 0x41B870
    int CheckPassengerCount();  // 0x41B5C0

    // === Phase 3: Spawn/Dock ===
    int ProcessDockCheck();  // 0x41ADC0
    int UpdateDocking();  // 0x41B9F0
    int CheckDockState();  // 0x41C070
    int CheckReloadState();  // 0x41C010
    int CheckReloadTimer();  // 0x41C020

    // === Phase 3: Per-Frame & AI ===
    void PowerDrainUpdate() override;  // 0x41B610
    virtual int HandleTargetDestroyed();  // 0x41B660
    int ProcessMissionTimeout();  // 0x414A80
    int GetMissionTimer();  // 0x41A5C0
    int EvaluateTargetingState();  // 0x41A940
    virtual int AssignDestination_SyncLog();  // 0x41AA80
    int OverrideMission_SyncLog();  // 0x41BB30
    int RevealSight();  // 0x41ADF0
    int DeployWithAnim();  // 0x4165C0
    int PowerDrainProcess();  // 0x41C190

    // === Phase 3: Stream ===
    virtual int LoadFromStream();  // 0x41B430
    void Destruct();  // 0x414080

    // === Phase 3: Cursor & State ===
    virtual int GetCursorOverObject();  // 0x417CC0
    int IsHeightAboveThreshold();  // 0x41B920
    int IsBelowScreen();  // 0x41B980
    int CheckMissionAbort();  // 0x41C1D0
    int CheckMissionFail();  // 0x41C200
    int CheckActionStatus();  // 0x41C210
    int CheckMissionStatus();  // 0x5B2E90
    int CheckMissionStatus2();  // 0x5B2F30
    int CheckStateFlag();  // 0x41BE80
    int CheckStateFlag2();  // 0x41BE90

    // === Phase 3: Stubs ===
    bool StubReturnFalse2() override;  // 0x41BE70
    bool StubReturnFalse3();  // 0x5F43B0
    bool StubReturnFalse4();  // 0x5F43F0
    bool StubReturnTrue();  // 0x5F43C0
    int MissionStubReturnZero();  // 0x41B910
    int MissionStubReturnZero2();  // 0x41C170
    int MissionStubReturnZero3();  // 0x41C180

    // === Phase 3: Drawing ===
    void Draw(Point2D* screen_pos, RectangleStruct* bounds) const;  // 0x4144B0
    void DrawShadow(Point2D* screen_pos, RectangleStruct* bounds) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    void DrawJetExhaust(Point2D* screen_pos) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history

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
