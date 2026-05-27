#include "gamemd/object/foot.hpp"

#include <cstring>

namespace ra2 {
namespace game {

namespace {

constexpr uint32_t kFootFlag = 0x4u;

} // anonymous namespace

FootClass::FootClass() noexcept
    : m_planning_path_idx(-1)
    , m_unknown_short_524(0)
    , m_unknown_short_526(0)
    , m_unknown_short_528(0)
    , m_unknown_short_52A(0)
    , m_unknown_52C(0)
    , m_unknown_530(0)
    , m_unknown_534(0)
    , m_unknown_538(0)
    , m_unknown_bool_53C(false)
    , m_unknown_540(0)
    , m_current_map_coords{}
    , m_last_map_coords{}
    , m_last_jumpjet_map_coords{}
    , m_current_jumpjet_map_coords{}
    , m_unknown_coords_568{}
    , m_unused_574(0)
    , m_speed_percentage(0.0)
    , m_speed_multiplier(0.0)
    , m_destination(nullptr)
    , m_last_destination(nullptr)
    , m_unknown_int_5C4(-1)
    , m_unknown_5C8(0)
    , m_unknown_5CC(0)
    , m_unknown_5D0(0)
    , m_unknown_bool_5D1(false)
    , m_team(nullptr)
    , m_next_team_member(nullptr)
    , m_unknown_5DC(0)
    , m_path_delay_timer{}
    , m_unknown_int_64C(0)
    , m_unknown_timer_650{}
    , m_sight_timer{}
    , m_blockage_path_timer{}
    , m_unknown_point3d_678{}
    , m_tube_index(-1)
    , m_unknown_bool_685(false)
    , m_waypoint_index(0)
    , m_unknown_bool_687(false)
    , m_unknown_bool_688(false)
    , m_is_team_leader(false)
    , m_should_scan_for_target(false)
    , m_unknown_bool_68B(false)
    , m_unknown_bool_68C(false)
    , m_unknown_bool_68D(false)
    , m_unknown_bool_68E(false)
    , m_should_enter_absorber(false)
    , m_should_enter_occupiable(false)
    , m_should_garrison_structure(true)
    , m_parasite_eating_me(nullptr)
    , m_unknown_698(0)
    , m_parasite_im_using(nullptr)
    , m_paralysis_timer{}
    , m_unknown_bool_6AC(false)
    , m_is_attacked_by_locomotor(false)
    , m_is_let_go_by_locomotor(false)
    , m_unknown_bool_6AF(false)
    , m_unknown_bool_6B0(false)
    , m_unknown_bool_6B1(false)
    , m_unknown_bool_6B2(false)
    , m_unknown_bool_6B3(false)
    , m_unknown_bool_6B4(false)
    , m_unknown_bool_6B5(false)
    , m_unknown_bool_6B6(false)
    , m_frozen_still(false)
    , m_unknown_bool_6B8(false)
    , m_unused_6BC(0)
{
    std::memset(&m_audio7, 0, sizeof(m_audio7));
    std::memset(m_path_directions, 0, sizeof(m_path_directions));

    m_locomotor.ptr = nullptr;

    m_abstract_flags |= kFootFlag;
}

} // namespace game
} // namespace ra2
