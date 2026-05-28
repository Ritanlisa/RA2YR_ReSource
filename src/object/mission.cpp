#include "gamemd/object/mission.hpp"

namespace ra2 {
namespace game {

MissionClass::MissionClass() noexcept
    : m_current_mission(0)
    , m_suspended_mission(0)
    , m_queued_mission(0)
    , m_mission_queued(false)
    , m_mission_status(0)
    , m_mission_start_time(0)
    , m_mission_data(0)
    , m_mission_timer{}
{
}

bool MissionClass::QueueMission(Mission mission, bool start_mission)
{
    if (start_mission)
    {
        m_suspended_mission = m_current_mission;
        m_current_mission = static_cast<int32_t>(mission);
        m_mission_queued = false;
        return true;
    }

    m_queued_mission = static_cast<int32_t>(mission);
    m_mission_queued = true;
    return true;
}

bool MissionClass::NextMission()
{
    if (m_mission_queued)
    {
        m_current_mission = m_queued_mission;
        m_mission_queued = false;
        m_mission_status = 0;
        return true;
    }
    return false;
}

void MissionClass::ForceMission(Mission mission)
{
    m_suspended_mission = m_current_mission;
    m_current_mission = static_cast<int32_t>(mission);
    m_mission_queued = false;
    m_mission_status = 0;
}

bool MissionClass::Mission_Revert()
{
    if (m_suspended_mission != 0)
    {
        m_current_mission = m_suspended_mission;
        m_suspended_mission = 0;
        m_mission_status = 0;
        return true;
    }
    return false;
}

} // namespace game
} // namespace ra2
