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
    , scenarioField_62C(0)
    , scenarioField_630(0)
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
    , m_carry_over_money(0.0)
    , m_carry_over_cap(0)
    , m_percent(0)
    , scenarioField_34A0(0)
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
    , scenarioFlag_34B5(false)
    , scenarioFlag_34B6(false)
    , scenarioFlag_34B7(false)
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
    , scenarioField_3598(0)
    , m_init_time(0)
    , m_stage(0)
    , scenarioField_35A2(false)
    , scenarioField_35A3(0)
    , m_par_time_easy(0)
    , m_par_time_medium(0)
    , m_par_time_difficult(0)
    , m_ls640_brief_loc_x(0)
    , m_ls640_brief_loc_y(0)
    , m_ls800_brief_loc_x(0)
    , m_ls800_brief_loc_y(0)
{
    // IDA 0x6832CF: SeedInitRNG(&m_random, 0) -- offset +536
    m_random.Random(); // placeholder: SeedInitRNG will replace

    // IDA 0x6832E5: m_elapsed_timer = Timer::GetTicks() -- offset +1556
    // IDA 0x6832EB: m_elapsed_timer.end = 0 -- offset +1564
    // IDA 0x6832F6: m_pause_timer = Timer::GetTicks() -- offset +1568
    // IDA 0x6832FC: m_pause_timer.end = 0 -- offset +1576

    // IDA 0x683307: offset +4592 = 0
    // IDA 0x68330D: offset +4584 = CurrentFrame
    // IDA 0x683313: offset +4600 = 0
    // IDA 0x68331F: offset +4640 = 0
    // IDA 0x683325: offset +4632 = CurrentFrame
    // IDA 0x683331: offset +4644 = CurrentFrame
    // IDA 0x683337: offset +4652 = 0
    // IDA 0x683342: offset +4664 = 0
    // IDA 0x683348: offset +4656 = CurrentFrame
    // IDA 0x683354: offset +4668 = CurrentFrame
    // IDA 0x68335A: offset +4676 = 0
    // IDA 0x683366: offset +4688 = 0
    // IDA 0x68336C: offset +4680 = CurrentFrame
    // IDA 0x683381: offset +13504 = CurrentFrame
    // IDA 0x683387: offset +13512 = 0

    // IDA 0x68338D: TypeList::TechnoTypeConstructor(this+13524, 0, 0)
    // IDA 0x683397: offset +13540 = 0
    // IDA 0x68339A: offset +13544 = 10
    // IDA 0x68339D: vtable assignment (TypeList<TechnoTypeClass*>)

    // IDA 0x6833AD: VectorClass::Construct(this+13552, 0, 0)
    // IDA 0x6833B2: offset +13572 = 10
    // IDA 0x6833B5: offset +13568 = 0
    // IDA 0x6833B8: vtable assignment (TypeList<int>)

    // IDA 0x6833C8: VectorClass::Construct(this+13580, 0, 0)
    // IDA 0x6833CF: offset +13600 = 10
    // IDA 0x6833D2: offset +13596 = 0
    // IDA 0x6833D5: vtable assignment (TypeList<int>)

    // IDA 0x6833DB: ScenarioClass::InitTimer(this)
    // IDA 0x6833E2: offset +13720 = 0
    // IDA 0x6833E8: offset +13501 = 0
    // IDA 0x6833EE: ScenarioClass::ResetIntroFlags(this)
    // IDA 0x6833F3: offset +4692 = 1
    // IDA 0x6833FD: offset +13516 = -1

    // IDA 0x683407: offset +4 = 0
    // IDA 0x68340A: offset +264 = 0

    // IDA 0x683421: memset loop -- 702 iterations, dword_B05458 -> offset +1586
    std::memset(m_waypoints, 0xFF, sizeof(m_waypoints)); // TODO: verify source constant

    // IDA 0x683435: wcscpy(this+4960, &g_TypeClass_DefaultString)
    std::memset(m_name, 0, sizeof(m_name));
    // IDA 0x683446: wcscpy(this+5082, &g_TypeClass_DefaultString)
    std::memset(m_ui_name_loaded, 0, sizeof(m_ui_name_loaded));
    // IDA 0x683475: strcpy(this+4700, &g_INI_DefaultBuffer)
    std::memset(m_file_name, 0, sizeof(m_file_name));
    // IDA 0x68349D: strcpy(this+7248, &g_INI_DefaultBuffer)
    std::memset(m_briefing, 0, sizeof(m_briefing));
    // IDA 0x6834BF: strcpy(this+5050, &g_INI_DefaultBuffer)
    std::memset(m_ui_name, 0, sizeof(m_ui_name));
    // IDA 0x6834CF: wcscpy(this+5200, &g_TypeClass_DefaultString)

    // IDA 0x6834E2-0x683502: HouseClass::UpdateAllTypes loop (50 iterations)
    for (int i = 0; i < 50; ++i) {
        m_global_variables[i].m_name[0] = '\0'; // offset -40 from m_value
        m_global_variables[i].m_value = '\0';
    }

    // IDA 0x68350F-0x68352F: TriggerActionQueue::ProcessAll loop (100 iterations)
    for (int i = 0; i < 100; ++i) {
        m_local_variables[i].m_name[0] = '\0'; // offset -40 from m_value
        m_local_variables[i].m_value = '\0';
    }

    // IDA 0x683534-0x683549: zero 4 dwords at +13454
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
