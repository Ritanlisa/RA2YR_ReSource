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

} // namespace game
} // namespace ra2
