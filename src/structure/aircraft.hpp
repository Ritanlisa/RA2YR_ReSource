#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "core/interfaces.hpp"
#include "object/foot.hpp"

namespace gamemd {
    // X27: member-decl type supply (log-driven hygiene)
    class AnimClass;
    class TagClass;

using ra2::game::AbstractClass;
using ra2::game::AbstractType;

class AircraftTypeClass;

class StageClass : public IFlyControl
{
public:
    // unmatched: no callgraph reference and no git history record
    virtual int __stdcall Landing_Altitude();
    // unmatched: no callgraph reference and no git history record
    virtual int __stdcall Landing_Direction();
    // unmatched: no callgraph reference and no git history record
    virtual long __stdcall Is_Loaded();
    // unmatched: no callgraph reference and no git history record
    virtual long __stdcall Is_Strafe();
    // unmatched: no callgraph reference and no git history record
    virtual long __stdcall Is_Fighter();
    virtual long __stdcall Is_Locked();
};

class FlasherClass : public StageClass
{
};

// CSP: AircraftClass matched via T3
class AircraftClass : public ra2::game::FootClass, public FlasherClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Aircraft;

    // unmatched: no callgraph reference and no git history record
    virtual int __stdcall Landing_Altitude();
    // unmatched: no callgraph reference and no git history record
    virtual int __stdcall Landing_Direction();
    // unmatched: no callgraph reference and no git history record
    virtual long __stdcall Is_Loaded();
    // unmatched: no callgraph reference and no git history record
    virtual long __stdcall Is_Strafe();
    // unmatched: no callgraph reference and no git history record
    virtual long __stdcall Is_Fighter();
    // design: virtual function, no binary implementation matched in IDA
    virtual long __stdcall Is_Locked();

    virtual HRESULT __stdcall QueryInterface(AbstractClass *a2, void *iid, void **ppv); // 0x414290
    virtual ULONG __stdcall AddRef() override;  // 0x4142F0
    virtual ULONG __stdcall Release() override;  // 0x414300

    // wrapper: delegates to AircraftClass::Release at 0x414300
    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;
    // wrapper: delegates to AircraftClass::Release at 0x414300
    virtual HRESULT __stdcall Load(IStream* pStm) override;
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // design: virtual function, no binary implementation matched in IDA
    virtual int objectSize() const ;

    virtual ~AircraftClass() override = default;  // 0x414080

    // === Phase 3: Missions ===
    int Mission_Attack() ;
    // wrapper: delegates to AircraftClass::Mission_Attack at 0x417FE0
    int Mission_Return() ;
    // wrapper: delegates to UnitClass::Mission_Harvest at 0x4151E0
    int Mission_Hunt() ;
    // wrapper: delegates to UnitClass::Mission_Harvest at 0x4151E0
    int Mission_Retreat() ;
    int Mission_Enter() ;
    int Mission_Transport();  // 0x419C80
    int MissionDispatch(void * a2, int a3, void ** a4);  // 0x4190B0 (G42.42l truth arity)

    // === Phase 3: Flight Paths ===
    int MoveTo(int* a2, int a3);  // 0x414310 (G42.42f truth arity)
    int ValidateMovement();  // 0x417BD0
    int CanEnterCell(int16_t* a2, char a3, char a4);  // 0x417F80 (G42.42d truth arity)

    // === Phase 3: Landing ===
    int ProcessLanding(int a2, int a3);  // 0x41BA90 (G42.42d truth arity)
    int FindLandingCell();  // 0x415B10
    int ValidateLandingCell();  // 0x4196B0
    int ProcessReturnToBase();  // 0x415A50
    int CheckLandingClearance();  // 0x41A590
    // wrapper: delegates to AircraftClass::CheckLandingClearance at 0x41A590
    int Mission_Unload_full();
    int LandingCheckStub();  // 0x41BE60

    // === Phase 3: Paradrop ===
    int ProcessPassengerEjection();  // 0x41B870
    int CheckPassengerCount();  // 0x41B5C0

    // === Phase 3: Spawn/Dock ===
    int ProcessDockCheck();  // 0x41ADC0
    int FlightUpdate(int a2 = 0, int a3 = 0);  // 0x415EE0 (IDA 名 BulletClass::FlightUpdate 为误名, 地址在 Aircraft 区)
    virtual void sub_41C140();  // 0x41C140 FootClass vt+0x540  // G57w8: 与基类 foot.hpp 声明对齐 (C2555)
    int UpdateDocking();  // 0x41B9F0
    int CheckDockState();  // 0x41C070
    int CheckReloadTimer();  // 0x41C020

    // === Phase 3: Per-Frame & AI ===
    int PowerDrainUpdate(int* a2);  // 0x41B610 (G42.42d truth arity: Power*; override dropped - no base decl)
    virtual int HandleTargetDestroyed(int* a2, int* a3);  // 0x41B660 (G42.42d truth arity)
    int ProcessMissionTimeout();  // 0x414A80
    int GetMissionTimer();  // 0x41A5C0
    int EvaluateTargetingState();  // 0x41A940
    virtual int AssignDestination_SyncLog(int a2, int a3);  // 0x41AA80 truth arity (Mission_Enter disasm 0x480h)
    int OverrideMission_SyncLog();  // 0x41BB30
    int RevealSight();  // 0x41ADF0
    int DeployWithAnim();  // 0x4165C0
    int PowerDrainProcess();  // 0x41C190

    // === Phase 3: Stream ===
    virtual int LoadFromStream();  // 0x41B430
    int Destruct();  // 0x414080

    // === Phase 3: Cursor & State ===
    virtual int GetActionOnObject();  // 0x417CC0
    bool IsHeightAboveThreshold();  // X133: slot 21 override (base bool); impl 0x41B920
    bool IsBelowScreen();  // X133: slot 20 override (base bool); impl 0x41B980
    int CheckMissionAbort();  // 0x41C1D0
    int CheckMissionFail();  // 0x41C200
    int CheckActionStatus();  // 0x41C210
    int CheckMissionStatus();  // 0x5B2E90
    int CheckMissionStatus2();  // 0x5B2F30
    int CheckStateFlag();  // 0x41BE80
    int CheckStateFlag2();  // 0x41BE90

    // === Phase 3: Stubs ===
    bool StubReturnFalse2();  // 0x41BE70
    bool StubReturnFalse3();  // 0x5F43B0
    bool StubReturnFalse4();  // 0x5F43F0
    int StubReturnTrue();  // X133: slot 95 override (base int); impl 0x5F43C0
    int MissionStubReturnZero();  // 0x41B910
    int MissionStubReturnZero2();  // 0x41C170
    int MissionStubReturnZero3();  // 0x41C180

    // === Phase 3: Drawing ===
    void Draw(Point2D* screen_pos, RectangleStruct* bounds) const;  // 0x4144B0
    // unmatched: no callgraph reference and no git history record
    void DrawShadow(Point2D* screen_pos, RectangleStruct* bounds) const;
    // unmatched: no callgraph reference and no git history record
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
    void* SelectVocOrSfx;  // 0x0 (no offset truth)
    void* ReadINI_3;  // 0x0 (no offset truth)
    unsigned int ptr_6C0;  // 0x1728
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int Construct(int a1, void* a2);  // 0x413D20
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    void* Update(int a1, int a2);  // 0x413f80
    // === FUNCS-MOVE (END) ===
    int inAirFlag;  // +0x114 (ml flat supply)
    int q118;  // +0x118 (ml flat supply)
    int q2B4;  // +0x2B4 (ml flat supply)
    int pitchAngle;  // +0x2FC (ml flat supply)
    int storedTiberium;  // +0x350 (ml flat supply)
    int isTether;  // +0x418 (ml flat supply)
    int waypointIndex;  // +0x686 (ml flat supply)
    unsigned int FootClass_field_680; // 0x680  gB member supply
    void* ptr_4;  // 0x4 (ml truth)  gB ptr_0 supply
    void* ptr_8;  // 0x8 (ml truth)  gB ptr_0 supply
    void* ptr_C;  // 0xC (ml truth)  gB ptr_0 supply

    void* airstrike;  // X10 supply (csp_canon_members)
    unsigned char ambientSoundController[20];  /* AudioController */  // X10 supply (csp_canon_members)
    unsigned int ammo;  // X10 supply (csp_canon_members)
    TagClass* attachedTag;  // X10 supply (csp_canon_members)
    void* currentMission;  // X10 supply (csp_canon_members)
    int32_t displayProductionTo;  // X10 supply (csp_canon_members)
    bool isOnMap;  // X10 supply (csp_canon_members)
    bool isSelected;  // X10 supply (csp_canon_members)
    unsigned char location[12];  /* CoordStruct */  // X10 supply (csp_canon_members)
    ILocomotion* locomotor;  // X10 supply (csp_canon_members)
    unsigned char missionTimer[12];  /* TimerStruct */  // X10 supply (csp_canon_members)
    int32_t movementDestination;  // X10 supply (csp_canon_members)
    bool needsRedraw;  // X10 supply (csp_canon_members)
    unsigned int nextArrayIndex;  // X10 supply (csp_canon_members)
    ObjectClass* nextObject;  // X10 supply (csp_canon_members)
    unsigned int objectTypeFlags;  // X10 supply (csp_canon_members)
    unsigned int occupant;  // X10 supply (csp_canon_members)
    unsigned int owner;  // X10 supply (csp_canon_members)
    unsigned int owningHouseIndex;  // X10 supply (csp_canon_members)
    unsigned char passengers[8];  /* unsigned long long */  // X10 supply (csp_canon_members)
    AnimClass* target;  // X10 supply (csp_canon_members)
    unsigned int uniqueId;  // X10 supply (csp_canon_members)
    void* ptr_0;  // X10 supply (csp_canon_members)
};

} // namespace gamemd
