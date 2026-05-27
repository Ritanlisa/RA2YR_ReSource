#pragma once

#include <cstdint>

#include "..\object\abstract.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_CellStruct
#define GAMEMD_USING_CellStruct
using ra2::game::CellStruct;
#endif
#ifndef GAMEMD_USING_CoordStruct
#define GAMEMD_USING_CoordStruct
using ra2::game::CoordStruct;
#endif
#ifndef GAMEMD_USING_Point2D
#define GAMEMD_USING_Point2D
using ra2::game::Point2D;
#endif
#ifndef GAMEMD_USING_TimerStruct
#define GAMEMD_USING_TimerStruct
using ra2::game::TimerStruct;
#endif







struct TechnoTypeClass;

enum class TheaterType : int;

struct Variable
{
    char    m_name[40];
    char    m_value;
};

struct ScenarioFlags
{
    bool m_bit00 : 1;
    bool m_bit01 : 1;
    bool m_bit02 : 1;
    bool m_bit03 : 1;
    bool m_ctf_mode : 1;
    bool m_inert : 1;
    bool m_tiberium_grows : 1;
    bool m_tiberium_spreads : 1;
    bool m_mcv_deploy : 1;
    bool m_initial_veteran : 1;
    bool m_fixed_alliance : 1;
    bool m_harvester_immune : 1;
    bool m_fog_of_war : 1;
    bool m_bit13 : 1;
    bool m_tiberium_explosive : 1;
    bool m_destroyable_bridges : 1;
    bool m_meteorites : 1;
    bool m_ion_storms : 1;
    bool m_visceroids : 1;
    bool m_bit19 : 1;
    bool m_bit20 : 1;
    bool m_bit21 : 1;
    bool m_bit22 : 1;
    bool m_bit23 : 1;
    bool m_bit24 : 1;
    bool m_bit25 : 1;
    bool m_bit26 : 1;
    bool m_bit27 : 1;
    bool m_bit28 : 1;
    bool m_bit29 : 1;
    bool m_bit30 : 1;
    bool m_bit31 : 1;
};

struct Randomizer
{
    bool    m_unknown_00;
    int32_t m_next1;
    int32_t m_next2;
    uint32_t m_table[250];

    uint32_t Random();
    int32_t RandomRanged(int n_min, int n_max);
    double RandomDouble();
};

class ScenarioClass
{
public:
    static ScenarioClass* Instance;

    bool IsDefinedWaypoint(int idx);
    CellStruct* GetWaypointCoords(CellStruct* dest, int idx);
    CellStruct GetWaypointCoords(int idx)
    {
        CellStruct dest;
        GetWaypointCoords(&dest, idx);
        return dest;
    }

    static void UpdateCellLighting();
    static void UpdateLighting();
    static void RecalcLighting(int r, int g, int b, uint32_t unk);

    ScenarioFlags       m_special_flags;
    char                m_next_scenario[260];
    char                m_alt_next_scenario[260];
    int32_t             m_home_cell;
    int32_t             m_alt_home_cell;
    int32_t             m_unique_id;
    Randomizer          m_random;
    uint32_t            m_difficulty_1;
    uint32_t            m_difficulty_2;
    TimerStruct         m_elapsed_timer;
    TimerStruct         m_pause_timer;
    uint32_t            m_unknown_62C;
    uint16_t            m_unknown_630;
    CellStruct          m_waypoints[702];

    int32_t             m_start_x;
    int32_t             m_start_y;
    int32_t             m_width;
    int32_t             m_height;
    int32_t             m_number_starting_points;
    Point2D             m_starting_points[8];
    int32_t             m_house_indices[16];
    CellStruct          m_house_home_cells[8];
    bool                m_teams_present;
    int32_t             m_num_coop_human_start_spots;
    TimerStruct         m_mission_timer;
    const wchar_t*      m_mission_timer_text_csf;
    char                m_mission_timer_text[32];
    TimerStruct         m_shroud_regrow_timer;
    TimerStruct         m_fog_timer;
    TimerStruct         m_ice_timer;
    TimerStruct         m_unknown_timer_123c;
    TimerStruct         m_ambient_timer;
    int32_t             m_tech_level;
    int32_t             m_theater;
    char                m_file_name[260];
    wchar_t             m_name[45];
    char                m_ui_name[32];
    wchar_t             m_ui_name_loaded[45];

    const char*         m_intro;
    const char*         m_brief;
    const char*         m_win;
    const char*         m_lose;
    const char*         m_action;
    const char*         m_post_score;
    const char*         m_pre_map_select;

    wchar_t             m_briefing[1024];
    char                m_briefing_csf[32];
    int32_t             m_theme_index;
    int32_t             m_human_player_house_type_index;
    double              m_carry_over_money;
    int32_t             m_carry_over_cap;
    int32_t             m_percent;

    Variable            m_global_variables[50];
    Variable            m_local_variables[100];

    CellStruct          m_view1;
    CellStruct          m_view2;
    CellStruct          m_view3;
    CellStruct          m_view4;
    uint32_t            m_unknown_34A0;
    bool                m_free_radar;
    bool                m_train_crate;
    bool                m_tiberium_growth_enabled;
    bool                m_vein_growth_enabled;
    bool                m_ice_growth_enabled;
    bool                m_bridge_destroyed;
    bool                m_variables_changed;
    bool                m_ambient_changed;
    bool                m_end_of_game;
    bool                m_timer_inherit;
    bool                m_skip_score;
    bool                m_one_time_only;
    bool                m_skip_map_select;
    bool                m_truck_crate;
    bool                m_fill_silos;
    bool                m_tiberium_death_to_visceroid;
    bool                m_ignore_global_ai_triggers;
    bool                m_unknown_bool_34B5;
    bool                m_unknown_bool_34B6;
    bool                m_unknown_bool_34B7;
    int32_t             m_player_side_index;
    bool                m_multiplayer_only;
    bool                m_is_random;
    bool                m_picked_up_any_crate;
    TimerStruct         m_unknown_timer_34C0;
    int32_t             m_campaign_index;
    int32_t             m_starting_dropships;
    TechnoTypeClass**   m_allowable_units;
    int32_t             m_allowable_units_count;
    int32_t*            m_allowable_unit_maximums;
    int32_t             m_allowable_maximums_count;
    int32_t*            m_dropship_unit_counts;
    int32_t             m_dropship_counts_count;

    // lighting
    int32_t             m_ambient_original;
    int32_t             m_ambient_current;
    int32_t             m_ambient_target;
    int32_t             m_red;
    int32_t             m_green;
    int32_t             m_blue;
    int32_t             m_ground;
    int32_t             m_level;

    int32_t             m_ion_ambient;
    int32_t             m_ion_red;
    int32_t             m_ion_green;
    int32_t             m_ion_blue;
    int32_t             m_ion_ground;
    int32_t             m_ion_level;

    int32_t             m_nuke_ambient;
    int32_t             m_nuke_red;
    int32_t             m_nuke_green;
    int32_t             m_nuke_blue;
    int32_t             m_nuke_ground;
    int32_t             m_nuke_level;
    int32_t             m_nuke_ambient_change_rate;

    int32_t             m_dominator_ambient;
    int32_t             m_dominator_red;
    int32_t             m_dominator_green;
    int32_t             m_dominator_blue;
    int32_t             m_dominator_ground;
    int32_t             m_dominator_level;
    int32_t             m_dominator_ambient_change_rate;

    uint32_t            m_unknown_3598;
    int32_t             m_init_time;
    int16_t             m_stage;
    bool                m_unknown_35A2;
    uint8_t             m_unknown_35A3;
    int32_t             m_par_time_easy;
    int32_t             m_par_time_medium;
    int32_t             m_par_time_difficult;
    char                m_under_par_title[31];
    char                m_under_par_message[31];
    char                m_over_par_title[31];
    char                m_over_par_message[31];
    char                m_ls_load_message[31];
    char                m_ls_brief[31];
    int32_t             m_ls640_brief_loc_x;
    int32_t             m_ls640_brief_loc_y;
    int32_t             m_ls800_brief_loc_x;
    int32_t             m_ls800_brief_loc_y;
    char                m_ls640_bkgd_name[64];
    char                m_ls800_bkgd_name[64];
    char                m_ls800_bkgd_pal[64];

protected:
    ScenarioClass() noexcept;
    ~ScenarioClass() noexcept;
};

} // namespace gamemd

