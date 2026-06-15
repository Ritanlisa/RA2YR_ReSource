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
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }

    virtual ~MissionClass() = default;

    virtual bool queueMission(Mission mission, bool start_mission);
    virtual bool nextMission();
    virtual void forceMission(Mission mission);
    virtual void onMissionChanged(Mission mission) {}
    virtual bool revertMission();
    virtual bool isMissionDone() const { return false; }
    virtual bool hasValidTarget() const { return false; }

    virtual int Mission_Sleep() { return 0; }
    virtual int Mission_Harmless() { return 0; }
    virtual int Mission_Ambush() { return 0; }
    virtual int Mission_Attack() { return 0; }
    virtual int Mission_Capture() { return 0; }
    virtual int Mission_Eaten() { return 0; }
    virtual int Mission_Guard() { return 0; }
    virtual int Mission_AreaGuard() { return 0; }
    virtual int Mission_Harvest() { return 0; }
    virtual int Mission_Hunt() { return 0; }
    virtual int Mission_Move() { return 0; }
    virtual int Mission_Retreat() { return 0; }
    virtual int Mission_Return() { return 0; }
    virtual int Mission_Stop() { return 0; }
    virtual int Mission_Unload() { return 0; }
    virtual int Mission_Enter() { return 0; }
    virtual int Mission_Construction() { return 0; }
    virtual int Mission_Selling() { return 0; }
    virtual int Mission_Repair() { return 0; }
    virtual int Mission_Missile() { return 0; }
    virtual int Mission_Open() { return 0; }
    virtual int Mission_Rescue() { return 0; }
    virtual int Mission_Patrol() { return 0; }
    virtual int Mission_ParaDropApproach() { return 0; }
    virtual int Mission_ParaDropOverfly() { return 0; }
    virtual int Mission_Wait() { return 0; }
    virtual int Mission_SpyPlaneApproach() { return 0; }
    virtual int Mission_SpyPlaneOverfly() { return 0; }

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
