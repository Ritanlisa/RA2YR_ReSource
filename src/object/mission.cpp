#include "object/mission.hpp"

namespace ra2 {
namespace game {

extern int& CurrentFrame;

MissionClass::MissionClass() noexcept
    : currentMission(-1)
    , suspendedMission(-1)
    , queuedMission(-1)
    , missionQueued(false)
    , missionStatus(0)
    , missionStartTime(0)
    , missionData(0)
    , missionTimer{}
{
    // IDA 0x5B2DA0: RadioClass base constructor sets missionStartTime = CurrentFrame
    // and initializes all mission fields to -1/0/false
    missionStartTime = static_cast<int32_t>(CurrentFrame);
}

bool MissionClass::queueMission(Mission mission, bool start_mission)
{
    if (start_mission)
    {
        suspendedMission = currentMission;
        currentMission = static_cast<int32_t>(mission);
        missionQueued = false;
        return true;
    }

    queuedMission = static_cast<int32_t>(mission);
    missionQueued = true;
    return true;
}

bool MissionClass::nextMission()
{
    if (missionQueued)
    {
        currentMission = queuedMission;
        missionQueued = false;
        missionStatus = 0;
        return true;
    }
    return false;
}

void MissionClass::forceMission(Mission mission)
{
    suspendedMission = currentMission;
    currentMission = static_cast<int32_t>(mission);
    missionQueued = false;
    missionStatus = 0;
}

bool MissionClass::revertMission()
{
    if (suspendedMission != 0)
    {
        currentMission = suspendedMission;
        suspendedMission = 0;
        missionStatus = 0;
        return true;
    }
    return false;
}

} // namespace game
} // namespace ra2
