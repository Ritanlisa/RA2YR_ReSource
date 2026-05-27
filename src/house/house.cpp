#include "gamemd/house/house.hpp"
#include "gamemd/house/house_type.hpp"
#include "gamemd/system/factory.hpp"
#include "gamemd/structure/building.hpp"
#include "gamemd/core/vector.hpp"
#include "gamemd/fundamentals.hpp"

#include <cstring>

namespace gamemd
{

extern void* HouseClass_vftable[1];
extern int& CurrentFrame;
extern DynamicVectorClass<HouseClass*> HouseClass_Array;
extern DynamicVectorClass<AbstractClass*> AbstractClass_Array;

namespace {

constexpr uint32_t kHouseFlag = 0x8u;

} // anonymous namespace

HouseClass::HouseClass(HouseTypeClass* pType) noexcept
{
    m_array_index         = 0;
    m_type                = pType;
    m_related_tags        = nullptr;
    m_related_tags_count  = 0;
    m_related_tags_capacity = 0;

    m_con_yards            = nullptr;
    m_con_yards_count      = 0;
    m_con_yards_capacity   = 0;
    m_buildings            = nullptr;
    m_buildings_count      = 0;
    m_buildings_capacity   = 0;
    m_unit_repair_stations = nullptr;
    m_repair_stations_count = 0;
    m_repair_stations_capacity = 0;
    m_grinders             = nullptr;
    m_grinders_count       = 0;
    m_grinders_capacity    = 0;
    m_absorbers            = nullptr;
    m_absorbers_count      = 0;
    m_absorbers_capacity   = 0;
    m_bunkers              = nullptr;
    m_bunkers_count        = 0;
    m_bunkers_capacity     = 0;
    m_occupiables          = nullptr;
    m_occupiables_count    = 0;
    m_occupiables_capacity = 0;
    m_cloning_vats         = nullptr;
    m_cloning_vats_count   = 0;
    m_cloning_vats_capacity = 0;
    m_secret_labs          = nullptr;
    m_secret_labs_count    = 0;
    m_secret_labs_capacity = 0;
    m_psychic_detection_buildings = nullptr;
    m_psychic_detection_count     = 0;
    m_psychic_detection_capacity  = 0;
    m_factory_plants       = nullptr;
    m_factory_plants_count = 0;
    m_factory_plants_capacity = 0;

    m_count_resource_gatherers     = 0;
    m_count_resource_destinations  = 0;
    m_count_warfactories           = 0;
    m_infantry_self_heal           = 0;
    m_units_self_heal              = 0;

    m_starting_units       = nullptr;
    m_starting_units_count = 0;
    m_starting_units_capacity = 0;

    m_ai_difficulty            = 0;
    m_firepower_multiplier     = 1.0;
    m_groundspeed_multiplier   = 1.0;
    m_airspeed_multiplier      = 1.0;
    m_armor_multiplier         = 1.0;
    m_rof_multiplier           = 1.0;
    m_cost_multiplier          = 1.0;
    m_build_time_multiplier    = 1.0;
    m_repair_delay             = 0.0;
    m_build_delay              = 0.0;
    m_iq_level                 = 0;
    m_tech_level               = 0;
    m_alt_allies               = 0;
    m_starting_credits         = 0;
    m_starting_edge            = 0;
    m_unknown_1E4              = 0;
    m_side_index               = 0;

    m_current_player           = false;
    m_player_control           = false;
    m_production               = false;
    m_autocreate_allowed       = false;
    m_ai_triggers_active       = false;
    m_auto_base_building       = false;
    m_discovered_by_player     = false;
    m_defeated                 = false;
    m_is_game_over             = false;
    m_is_winner                = false;
    m_is_loser                 = false;
    m_civilians_evacuated      = false;
    m_firestorm_active         = false;
    m_has_threat_node          = false;
    m_recheck_tech_tree        = false;

    m_selected_path_index      = 0;
    std::memset(m_planning_paths, 0, sizeof(m_planning_paths));

    m_visionary            = 0;
    m_map_is_clear          = false;
    m_unknown_bool_242      = false;
    m_unknown_bool_243      = false;
    m_has_been_thieved      = false;
    m_repairing             = false;
    m_unknown_bool_246      = false;
    m_unknown_bool_247      = false;
    m_unknown_bool_248      = false;
    m_all_to_hunt           = false;
    m_unknown_bool_24A      = false;
    m_unknown_bool_24B      = false;
    m_iq_level2             = 0;
    m_ai_mode               = 0;

    m_supers        = nullptr;
    m_supers_count  = 0;
    m_supers_capacity = 0;

    m_last_built_building_type  = -1;
    m_last_built_infantry_type  = -1;
    m_last_built_aircraft_type  = -1;
    m_last_built_vehicle_type   = -1;
    m_allow_win_blocks          = 0;

    m_repair_timer          = TimerStruct{};
    m_unknown_timer_28C     = TimerStruct{};
    m_savour_timer          = TimerStruct{};
    m_power_blackout_timer  = TimerStruct{};
    m_radar_blackout_timer  = TimerStruct{};

    m_side2_tech_infiltrated    = false;
    m_side1_tech_infiltrated    = false;
    m_side0_tech_infiltrated    = false;
    m_barracks_infiltrated      = false;
    m_war_factory_infiltrated   = false;

    m_infantry_alt_owner  = 0;
    m_unit_alt_owner      = 0;
    m_aircraft_alt_owner  = 0;
    m_building_alt_owner  = 0;

    m_airport_docks          = 0;
    m_powered_unit_centers   = 0;
    m_unknown_2DC            = 0;
    m_unknown_2E0            = 0;
    m_unknown_2E4            = 0;
    m_owned_units            = 0;
    m_owned_navy             = 0;
    m_owned_buildings        = 0;
    m_owned_infantry         = 0;
    m_owned_aircraft         = 0;

    std::memset(&m_owned_tiberium, 0, sizeof(m_owned_tiberium));
    m_balance       = 0;
    m_total_storage = 0;
    std::memset(&m_owned_weed, 0, sizeof(m_owned_weed));
    m_unknown_324 = 0;

    std::memset(&m_built_infantry_types, 0, sizeof(m_built_infantry_types));
    std::memset(&m_built_unit_types,     0, sizeof(m_built_unit_types));
    std::memset(&m_built_aircraft_types, 0, sizeof(m_built_aircraft_types));
    std::memset(&m_built_building_types, 0, sizeof(m_built_building_types));
    std::memset(&m_killed_infantry_types, 0, sizeof(m_killed_infantry_types));
    std::memset(&m_killed_unit_types,     0, sizeof(m_killed_unit_types));
    std::memset(&m_killed_aircraft_types, 0, sizeof(m_killed_aircraft_types));
    std::memset(&m_killed_building_types, 0, sizeof(m_killed_building_types));
    std::memset(&m_unknown_scores,        0, sizeof(m_unknown_scores));
    std::memset(&m_collected_powerups,    0, sizeof(m_collected_powerups));

    m_num_airpads        = 0;
    m_num_barracks       = 0;
    m_num_war_factories  = 0;
    m_num_con_yards      = 0;
    m_num_shipyards      = 0;
    m_num_ore_purifiers  = 0;

    m_cost_infantry_mult  = 1.0f;
    m_cost_units_mult     = 1.0f;
    m_cost_aircraft_mult  = 1.0f;
    m_cost_buildings_mult = 1.0f;
    m_cost_defenses_mult  = 1.0f;

    m_power_output = 0;
    m_power_drain  = 0;

    m_primary_for_aircraft   = nullptr;
    m_primary_for_infantry   = nullptr;
    m_primary_for_vehicles   = nullptr;
    m_primary_for_ships      = nullptr;
    m_primary_for_buildings  = nullptr;
    m_primary_unused1        = nullptr;
    m_primary_unused2        = nullptr;
    m_primary_unused3        = nullptr;
    m_primary_for_defenses   = nullptr;

    std::memset(m_unknown_53D0, 0, sizeof(m_unknown_53D0));

    m_our_flag_carrier  = nullptr;
    m_our_flag_coords   = CellStruct{};

    std::memset(m_killed_units_of_houses,     0, sizeof(m_killed_units_of_houses));
    std::memset(m_killed_buildings_of_houses, 0, sizeof(m_killed_buildings_of_houses));
    m_total_killed_units     = 0;
    m_total_killed_buildings = 0;

    m_unknown_548C   = 0;
    m_base_spawn_cell = CellStruct{};
    m_base_center     = CellStruct{};
    m_unknown_5498 = 0;
    m_unknown_549C = 0;
    m_unknown_54A0 = 0;
    m_unknown_54A4 = 0;
    m_unknown_54A8 = 0;
    m_unknown_54AC = 0;
    m_unknown_54B0 = 0;
    m_unknown_54B4 = 0;
    m_unknown_54B8 = 0;
    m_unknown_54BC = 0;
    m_unknown_54C0 = 0;
    m_unknown_54C4 = 0;
    m_unknown_54C8 = 0;
    m_unknown_54CC = 0;
    m_unknown_54D0 = 0;
    m_unknown_54D4 = 0;
    m_unknown_54D8 = 0;
    m_unknown_54DC = 0;
    m_unknown_54E0 = 0;

    std::memset(&m_radar_visible_to, 0, sizeof(m_radar_visible_to));

    m_silo_money               = 0;
    m_preferred_target_type    = 0;
    m_preferred_target_cell    = CellStruct{};
    m_preferred_defensive_cell = CellStruct{};
    m_preferred_defensive_cell2 = CellStruct{};
    m_preferred_defensive_cell_start_time = 0;

    std::memset(&m_owned_building_types,  0, sizeof(m_owned_building_types));
    std::memset(&m_owned_unit_types,      0, sizeof(m_owned_unit_types));
    std::memset(&m_owned_infantry_types,  0, sizeof(m_owned_infantry_types));
    std::memset(&m_owned_aircraft_types,  0, sizeof(m_owned_aircraft_types));
    std::memset(&m_owned_building_types_1, 0, sizeof(m_owned_building_types_1));
    std::memset(&m_owned_unit_types_1,     0, sizeof(m_owned_unit_types_1));
    std::memset(&m_owned_infantry_types_1, 0, sizeof(m_owned_infantry_types_1));
    std::memset(&m_owned_aircraft_types_1, 0, sizeof(m_owned_aircraft_types_1));
    std::memset(&m_owned_building_types_2, 0, sizeof(m_owned_building_types_2));
    std::memset(&m_owned_unit_types_2,     0, sizeof(m_owned_unit_types_2));
    std::memset(&m_owned_infantry_types_2, 0, sizeof(m_owned_infantry_types_2));
    std::memset(&m_owned_aircraft_types_2, 0, sizeof(m_owned_aircraft_types_2));

    m_unknown_55F0   = 0;
    m_unknown_55F4   = 0;
    m_attack_delay_a = 0;
    m_attack_delay_b = 0;
    m_enemy_house_index = -1;

    m_anger_nodes        = nullptr;
    m_anger_nodes_count  = 0;
    m_anger_nodes_capacity = 0;
    m_scout_nodes        = nullptr;
    m_scout_nodes_count  = 0;
    m_scout_nodes_capacity = 0;

    m_unk_timer3 = TimerStruct{};
    m_unk_timer4 = TimerStruct{};

    m_producing_building_type_index = -1;
    m_producing_unit_type_index     = -1;
    m_producing_infantry_type_index = -1;
    m_producing_aircraft_type_index = -1;

    m_ratio_ai_trigger_team   = 0;
    m_ratio_team_aircraft      = 0;
    m_ratio_team_infantry      = 0;
    m_ratio_team_buildings     = 0;
    m_base_defense_team_count  = 0;

    std::memset(m_dropship_data, 0, sizeof(m_dropship_data));
    m_current_dropship_index = 0;
    m_has_cloaking_ranges    = 0;

    std::memset(&m_color,      0, sizeof(m_color));
    std::memset(&m_laser_color, 0, sizeof(m_laser_color));
    m_color_padding = 0;

    std::memset(&m_base, 0, sizeof(m_base));

    m_recheck_power    = false;
    m_recheck_radar    = false;
    m_spy_sat_active   = false;
    m_is_being_drained = false;

    m_edge     = 0;
    m_emp_target  = CellStruct{};
    m_nuke_target = CellStruct{};

    m_allies = 0;

    m_damage_delay_timer = TimerStruct{};
    m_team_delay_timer   = TimerStruct{};
    m_unknown_timer_A    = TimerStruct{};
    m_unknown_timer_B    = TimerStruct{};
    m_unknown_timer_C    = TimerStruct{};
    m_unknown_timer_D    = TimerStruct{};
    m_unknown_timer_E    = TimerStruct{};
    m_unknown_57DC       = 0;

    std::memset(m_threat_posed_estimates_padding, 0, sizeof(m_threat_posed_estimates_padding));

    std::memset(m_plain_name, 0, sizeof(m_plain_name));
    std::memset(m_ui_name_string, 0, sizeof(m_ui_name_string));
    std::memset(m_ui_name, 0, sizeof(m_ui_name));

    m_color_scheme_index = 0;
    m_starting_cell      = CellStruct{};
    m_starting_allies    = 0;
    m_unknown_16060      = 0;

    m_waypoint_path         = nullptr;
    m_waypoint_path_count   = 0;
    m_waypoint_path_capacity = 0;

    m_unknown_1607C = 0;
    m_unknown_16080 = 0;
    m_unknown_16084 = 0;
    m_unused_16088  = 0.0;
    m_unused_16090  = 0.0;
    m_padding_16098 = 0;

    m_prediction_enemy_armor    = 0.0f;
    m_prediction_enemy_air      = 0.0f;
    m_prediction_enemy_infantry = 0.0f;

    m_total_owned_infantry_cost  = 0;
    m_total_owned_vehicle_cost   = 0;
    m_total_owned_aircraft_cost  = 0;
    m_unknown_160B4              = 0;

    m_abstract_flags = kHouseFlag;

    const auto vft = const_cast<void**>(reinterpret_cast<void* const*>(HouseClass_vftable));
    reinterpret_cast<void**>(this)[0] = vft;
    reinterpret_cast<void**>(this)[1] = vft;
    reinterpret_cast<void**>(this)[2] = vft;
    reinterpret_cast<void**>(this)[3] = vft;

    HouseClass_Array.AddItem(this);
    AbstractClass_Array.AddItem(this);
}

} // namespace gamemd
