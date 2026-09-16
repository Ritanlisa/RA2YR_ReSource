#pragma once

#include "object.hpp"

namespace ra2 {
namespace game {

struct MissionControlData
{
    int     ArrayIndex;
    bool    NoThreat;
    bool    Zombie;
    bool    Recruitable;
    bool    Paralyzed;
    bool    Retaliate;
    bool    Scatter;
    double  Rate;
    double  AARate;
};

class MissionClass : public ObjectClass
{
public:
    virtual HRESULT __stdcall Load(IStream* stream) override;  // 0x5B3760

    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MissionClass();

    virtual bool queueMission(Mission mission, bool start_mission);
    // wrapper: delegates to AbstractClass::queueMission at 0x4E01C0
    virtual bool nextMission();
    // unmatched: no callgraph reference and no git history record
    virtual void forceMission(Mission mission);
    // unmatched: no callgraph reference and no git history record
    virtual void onMissionChanged(Mission mission);
    // wrapper: delegates to AbstractClass::queueMission at 0x4E01C0
    virtual bool revertMission();
    // wrapper: delegates to AbstractClass::queueMission at 0x4E01C0
    virtual bool hasValidTarget() const;  // 0x5B3A10 (vtable byte 508)
    virtual bool isMissionDone() const;  // default-true base 0x4E0140 (vtable byte 512)

    // wrapper: delegates to MissionClass::HasValidTarget at 0x5B3A10
    virtual int Mission_Sleep();
    // wrapper: delegates to MissionClass::HasValidTarget at 0x5B3A10
    virtual int Mission_Harmless();
    // wrapper: delegates to MissionClass::HasValidTarget at 0x5B3A10
    virtual int Mission_Ambush();
    virtual int Mission_Attack();
    // wrapper: delegates to AircraftClass::Mission_Attack at 0x417FE0
    virtual int Mission_Capture();
    // wrapper: delegates to AircraftClass::Mission_Attack at 0x417FE0
    virtual int Mission_Eaten();
    virtual int Mission_Guard();
    // wrapper: delegates to BuildingClass::Mission_Guard at 0x459E70
    virtual int Mission_AreaGuard();
    virtual int Mission_Harvest();
    // wrapper: delegates to UnitClass::Mission_Harvest at 0x4151E0
    virtual int Mission_Hunt();
    // wrapper: delegates to UnitClass::Mission_Harvest at 0x4151E0
    virtual int Mission_Move();
    // wrapper: delegates to UnitClass::Mission_Harvest at 0x4151E0
    virtual int Mission_Retreat();
    // wrapper: delegates to UnitClass::Mission_Harvest at 0x4151E0
    virtual int Mission_Return();
    // wrapper: delegates to UnitClass::Mission_Harvest at 0x4151E0
    virtual int Mission_Stop();
    virtual int Mission_Unload();
    virtual int Mission_Enter();
    virtual int Mission_Construction();
    // wrapper: delegates to BuildingClass::Mission_Construction at 0x459EC0
    virtual int Mission_Selling();
    virtual int Mission_Repair();
    // wrapper: delegates to TechnoClass::Mission_RepairDispatch at 0x6F4AB0
    virtual int Mission_Missile();
    // wrapper: delegates to TechnoClass::Mission_RepairDispatch at 0x6F4AB0
    virtual int Mission_Open();
    // wrapper: delegates to TechnoClass::Mission_RepairDispatch at 0x6F4AB0
    virtual int Mission_Rescue();
    // wrapper: delegates to TechnoClass::Mission_RepairDispatch at 0x6F4AB0
    virtual int Mission_Patrol();
    // wrapper: delegates to TechnoClass::Mission_RepairDispatch at 0x6F4AB0
    virtual int Mission_ParaDropApproach();
    // design: virtual function, no binary implementation matched in IDA
    virtual int Mission_ParaDropOverfly();
    // design: virtual function, no binary implementation matched in IDA
    virtual int Mission_Wait();
    // design: virtual function, no binary implementation matched in IDA
    virtual int Mission_SpyPlaneApproach();
    // design: virtual function, no binary implementation matched in IDA
    virtual int Mission_SpyPlaneOverfly();

    int32_t     currentMission;
    int32_t     suspendedMission;
    int32_t     queuedMission;
    bool        missionQueued;
    uint8_t     alignmentPaddingB9[3];
    int32_t     missionStatus;
    int32_t     missionStartTime;
    uint32_t    missionData;
    TimerStruct missionTimer;

protected:
    MissionClass() noexcept;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    bool vt_entry_200();  // 0x41B5E0
    int IsProducing();  // 0x454250
    void* Init();  // 0x49B610
    int SetState();  // 0x5B2FD0
    int GetPrimaryOrFallback();  // 0x5B3040
    int AdvanceState();  // 0x5B3570
    void* FindName();  // 0x5B3700
    void* GetMissionControl();  // 0x5B3A00
    int Construct(int a1, int a2, int a3);  // 0x6E8A90
    int OverrideMission_SyncLog();  // 0x7013A0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int ExecuteTechnoMissionAction();  // 0x520ae0 -- Mission::ExecuteTechnoMissionAction
    int ProcessUnitMissionAI();  // 0x520f40 -- Mission::ProcessUnitMissionAI
    int AssignTeamMemberMissions(int a1, int a2);  // 0x6ed7e0 -- Mission::AssignTeamMemberMissions
    int GetMissionDelay();  // 0x70f770 -- Mission::GetMissionDelay
    // === SYMBOL-ANCHOR (END) ===
// --- e4 declarations (BEGIN) ---
    int vt_entry_1FC();  // 0x41BF30
    int Return450A();  // 0x5B2E10
    int Return450B();  // 0x5B2E20
    int Return450C();  // 0x5B2E30
    int Return450D();  // 0x5B2ED0
    int Return450E();  // 0x5B2EE0
    int Return450G();  // 0x5B2F10
    int Return450H();  // 0x5B2F20
    int Return450I();  // 0x5B2F40
    int Return450J();  // 0x5B2F50
    int Return450K();  // 0x5B2F80
    int Return450L();  // 0x5B2F90
    int Return450F();  // 0x5B2FA0
    int Return450M();  // 0x5B2FB0
    int Return450N();  // 0x5B2FC0
    char LoadFromINI(unsigned int * a2);  // 0x5B3760
    int HasValidTarget();  // 0x5B3A10
// --- e4 declarations (END) ---
};

} // namespace game
} // namespace ra2
