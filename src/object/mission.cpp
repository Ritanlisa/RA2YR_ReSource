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
    missionStartTime = (int32_t)(CurrentFrame);
}

bool MissionClass::queueMission(Mission mission, bool start_mission)
{
    if (start_mission)
    {
        suspendedMission = currentMission;
        currentMission = (int32_t)(mission);
        missionQueued = false;
        return true;
    }

    queuedMission = (int32_t)(mission);
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
    currentMission = (int32_t)(mission);
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

#include "object/mission.hpp"

namespace ra2 { namespace game {

// --- MissionClass ---

HRESULT __stdcall MissionClass::Load(IStream* stream) { return S_OK; }
void MissionClass::onMissionChanged(Mission mission) {}
bool MissionClass::isMissionDone() const { return false; }
bool MissionClass::hasValidTarget() const { return false; }
int MissionClass::Mission_Sleep() { return 0; }
int MissionClass::Mission_Harmless() { return 0; }
int MissionClass::Mission_Ambush() { return 0; }
int MissionClass::Mission_Attack() { return 0; }
int MissionClass::Mission_Capture() { return 0; }
int MissionClass::Mission_Eaten() { return 0; }
int MissionClass::Mission_Guard() { return 0; }
int MissionClass::Mission_AreaGuard() { return 0; }
int MissionClass::Mission_Harvest() { return 0; }
int MissionClass::Mission_Hunt() { return 0; }
int MissionClass::Mission_Move() { return 0; }
int MissionClass::Mission_Retreat() { return 0; }
int MissionClass::Mission_Return() { return 0; }
int MissionClass::Mission_Stop() { return 0; }
int MissionClass::Mission_Unload() { return 0; }
int MissionClass::Mission_Enter() { return 0; }
int MissionClass::Mission_Construction() { return 0; }
int MissionClass::Mission_Selling() { return 0; }
int MissionClass::Mission_Repair() { return 0; }
int MissionClass::Mission_Missile() { return 0; }
int MissionClass::Mission_Open() { return 0; }
int MissionClass::Mission_Rescue() { return 0; }
int MissionClass::Mission_Patrol() { return 0; }
int MissionClass::Mission_ParaDropApproach() { return 0; }
int MissionClass::Mission_ParaDropOverfly() { return 0; }
int MissionClass::Mission_Wait() { return 0; }
int MissionClass::Mission_SpyPlaneApproach() { return 0; }
int MissionClass::Mission_SpyPlaneOverfly() { return 0; }

} // namespace game
} // namespace ra2
