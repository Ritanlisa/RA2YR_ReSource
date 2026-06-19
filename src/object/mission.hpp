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

    virtual ~MissionClass() = default; // IDA: NOT_FOUND

    virtual bool queueMission(Mission mission, bool start_mission);  // 0x4E01C0
    virtual bool nextMission(); // IDA: NOT_FOUND
    virtual void forceMission(Mission mission); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual void onMissionChanged(Mission mission); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual bool revertMission(); // IDA: NOT_FOUND
    virtual bool isMissionDone() const; // IDA: NOT_FOUND
    virtual bool hasValidTarget() const;  // 0x5B3A10

    virtual int Mission_Sleep(); // IDA: NOT_FOUND
    virtual int Mission_Harmless(); // IDA: NOT_FOUND
    virtual int Mission_Ambush(); // IDA: NOT_FOUND
    virtual int Mission_Attack();  // 0x417FE0
    virtual int Mission_Capture(); // IDA: NOT_FOUND
    virtual int Mission_Eaten(); // IDA: NOT_FOUND
    virtual int Mission_Guard();  // 0x459E70
    virtual int Mission_AreaGuard(); // IDA: NOT_FOUND
    virtual int Mission_Harvest(); // IDA: NOT_FOUND
    virtual int Mission_Hunt(); // IDA: NOT_FOUND
    virtual int Mission_Move(); // IDA: NOT_FOUND
    virtual int Mission_Retreat(); // IDA: NOT_FOUND
    virtual int Mission_Return(); // IDA: NOT_FOUND
    virtual int Mission_Stop(); // IDA: NOT_FOUND
    virtual int Mission_Unload();  // 0x4151E0
    virtual int Mission_Enter();  // 0x4166C0
    virtual int Mission_Construction();  // 0x459EC0
    virtual int Mission_Selling(); // IDA: NOT_FOUND
    virtual int Mission_Repair();  // 0x6F4AB0
    virtual int Mission_Missile(); // IDA: NOT_FOUND
    virtual int Mission_Open(); // IDA: NOT_FOUND
    virtual int Mission_Rescue(); // IDA: NOT_FOUND
    virtual int Mission_Patrol(); // IDA: NOT_FOUND
    virtual int Mission_ParaDropApproach(); // IDA: NOT_FOUND
    virtual int Mission_ParaDropOverfly(); // IDA: NOT_FOUND
    virtual int Mission_Wait(); // IDA: NOT_FOUND
    virtual int Mission_SpyPlaneApproach(); // IDA: NOT_FOUND
    virtual int Mission_SpyPlaneOverfly(); // IDA: NOT_FOUND

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
