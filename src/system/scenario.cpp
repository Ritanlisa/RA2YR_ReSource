#include "gamemd/system/scenario.hpp"

#include <cstring>

namespace gamemd
{

ScenarioClass* ScenarioClass::Instance = nullptr;

ScenarioClass::ScenarioClass() noexcept
    : m_home_cell(-1)
    , m_alt_home_cell(-1)
    , m_unique_id(0)
    , m_difficulty_1(0)
    , m_difficulty_2(0)
    , m_unknown_62C(0)
    , m_unknown_630(0)
    , m_start_x(0)
    , m_start_y(0)
    , m_width(0)
    , m_height(0)
    , m_number_starting_points(0)
    , m_teams_present(false)
    , m_num_coop_human_start_spots(0)
    , m_mission_timer_text_csf(nullptr)
    , m_tech_level(0)
    , m_theater(0)
    , m_intro(nullptr)
    , m_brief(nullptr)
    , m_win(nullptr)
    , m_lose(nullptr)
    , m_action(nullptr)
    , m_post_score(nullptr)
    , m_pre_map_select(nullptr)
    , m_theme_index(-1)
    , m_human_player_house_type_index(-1)
    , m_carry_over_money(0)
    , m_carry_over_cap(0)
    , m_percent(0)
    , m_unknown_34A0(0)
    , m_free_radar(false)
    , m_train_crate(false)
    , m_tiberium_growth_enabled(false)
    , m_vein_growth_enabled(false)
    , m_ice_growth_enabled(false)
    , m_bridge_destroyed(false)
    , m_variables_changed(false)
    , m_ambient_changed(false)
    , m_end_of_game(false)
    , m_timer_inherit(false)
    , m_skip_score(false)
    , m_one_time_only(false)
    , m_skip_map_select(false)
    , m_truck_crate(false)
    , m_fill_silos(false)
    , m_tiberium_death_to_visceroid(false)
    , m_ignore_global_ai_triggers(false)
    , m_unknown_bool_34B5(false)
    , m_unknown_bool_34B6(false)
    , m_unknown_bool_34B7(false)
    , m_player_side_index(-1)
    , m_multiplayer_only(false)
    , m_is_random(false)
    , m_picked_up_any_crate(false)
    , m_campaign_index(-1)
    , m_starting_dropships(0)
    , m_allowable_units(nullptr)
    , m_allowable_units_count(0)
    , m_allowable_unit_maximums(nullptr)
    , m_allowable_maximums_count(0)
    , m_dropship_unit_counts(nullptr)
    , m_dropship_counts_count(0)
    , m_ambient_original(0)
    , m_ambient_current(0)
    , m_ambient_target(0)
    , m_red(0)
    , m_green(0)
    , m_blue(0)
    , m_ground(0)
    , m_level(0)
    , m_ion_ambient(0)
    , m_ion_red(0)
    , m_ion_green(0)
    , m_ion_blue(0)
    , m_ion_ground(0)
    , m_ion_level(0)
    , m_nuke_ambient(0)
    , m_nuke_red(0)
    , m_nuke_green(0)
    , m_nuke_blue(0)
    , m_nuke_ground(0)
    , m_nuke_level(0)
    , m_nuke_ambient_change_rate(0)
    , m_dominator_ambient(0)
    , m_dominator_red(0)
    , m_dominator_green(0)
    , m_dominator_blue(0)
    , m_dominator_ground(0)
    , m_dominator_level(0)
    , m_dominator_ambient_change_rate(0)
    , m_unknown_3598(0)
    , m_init_time(0)
    , m_stage(0)
    , m_unknown_35A2(false)
    , m_unknown_35A3(0)
    , m_par_time_easy(0)
    , m_par_time_medium(0)
    , m_par_time_difficult(0)
    , m_ls640_brief_loc_x(0)
    , m_ls640_brief_loc_y(0)
    , m_ls800_brief_loc_x(0)
    , m_ls800_brief_loc_y(0)
{
    std::memset(&m_special_flags, 0, sizeof(m_special_flags));
    std::memset(m_next_scenario, 0, sizeof(m_next_scenario));
    std::memset(m_alt_next_scenario, 0, sizeof(m_alt_next_scenario));
    std::memset(&m_random, 0, sizeof(m_random));
    std::memset(&m_elapsed_timer, 0, sizeof(m_elapsed_timer));
    std::memset(&m_pause_timer, 0, sizeof(m_pause_timer));
    std::memset(m_waypoints, 0, sizeof(m_waypoints));
    std::memset(m_starting_points, 0, sizeof(m_starting_points));
    std::memset(m_house_indices, 0, sizeof(m_house_indices));
    std::memset(m_house_home_cells, 0, sizeof(m_house_home_cells));
    std::memset(&m_mission_timer, 0, sizeof(m_mission_timer));
    std::memset(m_mission_timer_text, 0, sizeof(m_mission_timer_text));
    std::memset(&m_shroud_regrow_timer, 0, sizeof(m_shroud_regrow_timer));
    std::memset(&m_fog_timer, 0, sizeof(m_fog_timer));
    std::memset(&m_ice_timer, 0, sizeof(m_ice_timer));
    std::memset(&m_unknown_timer_123c, 0, sizeof(m_unknown_timer_123c));
    std::memset(&m_ambient_timer, 0, sizeof(m_ambient_timer));
    std::memset(m_file_name, 0, sizeof(m_file_name));
    std::memset(m_name, 0, sizeof(m_name));
    std::memset(m_ui_name, 0, sizeof(m_ui_name));
    std::memset(m_ui_name_loaded, 0, sizeof(m_ui_name_loaded));
    std::memset(m_briefing, 0, sizeof(m_briefing));
    std::memset(m_briefing_csf, 0, sizeof(m_briefing_csf));
    std::memset(m_global_variables, 0, sizeof(m_global_variables));
    std::memset(m_local_variables, 0, sizeof(m_local_variables));
    std::memset(&m_unknown_timer_34C0, 0, sizeof(m_unknown_timer_34C0));
    std::memset(m_under_par_title, 0, sizeof(m_under_par_title));
    std::memset(m_under_par_message, 0, sizeof(m_under_par_message));
    std::memset(m_over_par_title, 0, sizeof(m_over_par_title));
    std::memset(m_over_par_message, 0, sizeof(m_over_par_message));
    std::memset(m_ls_load_message, 0, sizeof(m_ls_load_message));
    std::memset(m_ls_brief, 0, sizeof(m_ls_brief));
    std::memset(m_ls640_bkgd_name, 0, sizeof(m_ls640_bkgd_name));
    std::memset(m_ls800_bkgd_name, 0, sizeof(m_ls800_bkgd_name));
    std::memset(m_ls800_bkgd_pal, 0, sizeof(m_ls800_bkgd_pal));

    m_view1 = {};
    m_view2 = {};
    m_view3 = {};
    m_view4 = {};
}

bool ScenarioClass::IsDefinedWaypoint(int idx)
{
    if (idx < 0 || idx >= 702)
        return false;
    return m_waypoints[idx].X != -1 || m_waypoints[idx].Y != -1;
}

CellStruct* ScenarioClass::GetWaypointCoords(CellStruct* dest, int idx)
{
    if (dest && idx >= 0 && idx < 702)
    {
        *dest = m_waypoints[idx];
    }
    else if (dest)
    {
        *dest = {};
    }
    return dest;
}

void ScenarioClass::UpdateCellLighting()
{
    // TODO: recalculate cell lighting across map
}

void ScenarioClass::UpdateLighting()
{
    // TODO: update global lighting interpolation
}

void ScenarioClass::RecalcLighting(int r, int g, int b, uint32_t unk)
{
    // TODO: recalculate all lighting converts
    (void)r;
    (void)g;
    (void)b;
    (void)unk;
}

} // namespace gamemd
