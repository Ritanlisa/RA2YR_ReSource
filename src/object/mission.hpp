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
    virtual HRESULT __stdcall Load(IStream* stream) override;

    virtual ~MissionClass() = default;

    virtual bool queueMission(Mission mission, bool start_mission);  // 0x4e01c0
    virtual bool nextMission();
    virtual void forceMission(Mission mission);
    virtual void onMissionChanged(Mission mission);
    virtual bool revertMission();
    virtual bool isMissionDone() const;
    virtual bool hasValidTarget() const;  // 0x5B3A10

    virtual int Mission_Sleep();
    virtual int Mission_Harmless();
    virtual int Mission_Ambush();
    virtual int Mission_Attack();  // 0x417fe0
    virtual int Mission_Capture();
    virtual int Mission_Eaten();
    virtual int Mission_Guard();  // 0x459e70
    virtual int Mission_AreaGuard();
    virtual int Mission_Harvest();
    virtual int Mission_Hunt();
    virtual int Mission_Move();
    virtual int Mission_Retreat();
    virtual int Mission_Return();
    virtual int Mission_Stop();
    virtual int Mission_Unload();  // 0x4151e0
    virtual int Mission_Enter();  // 0x4166c0
    virtual int Mission_Construction();  // 0x459ec0
    virtual int Mission_Selling();
    virtual int Mission_Repair();
    virtual int Mission_Missile();
    virtual int Mission_Open();
    virtual int Mission_Rescue();
    virtual int Mission_Patrol();
    virtual int Mission_ParaDropApproach();
    virtual int Mission_ParaDropOverfly();
    virtual int Mission_Wait();
    virtual int Mission_SpyPlaneApproach();
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
