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
    virtual ~MissionClass() = default;

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
    virtual bool isMissionDone() const;
    virtual bool hasValidTarget() const;  // 0x5B3A10

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
};

} // namespace game
} // namespace ra2
