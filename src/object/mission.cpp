#include "object/mission.hpp"

namespace ra2 {
namespace game {

MissionClass::MissionClass() noexcept
    : currentMission(0)
    , suspendedMission(0)
    , queuedMission(0)
    , missionQueued(false)
    , missionStatus(0)
    , missionStartTime(0)
    , missionData(0)
    , missionTimer{}
{
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
