#include "gamemd/house/house.hpp"
#include "gamemd/house/house_type.hpp"
#include "gamemd/system/factory.hpp"
#include "gamemd/structure/building.hpp"
#include "gamemd/core/vector.hpp"
#include "gamemd/fundamentals.hpp"

#include <cstring>

namespace gamemd
{

extern int& CurrentFrame;

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
    startingAllies2              = 0;
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
    sideNegotiationFlag2      = false;
    sideNegotiationFlag3      = false;
    m_has_been_thieved      = false;
    m_repairing             = false;
    aiStateFlag0      = false;
    aiStateFlag1      = false;
    aiStateFlag2      = false;
    m_all_to_hunt           = false;
    aiStateFlag3      = false;
    aiStateFlag4      = false;
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
    aiTeamAttackTimer     = TimerStruct{};
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
    factoryOccupancy1            = 0;
    factoryOccupancy2            = 0;
    factoryOccupancy3            = 0;
    m_owned_units            = 0;
    m_owned_navy             = 0;
    m_owned_buildings        = 0;
    m_owned_infantry         = 0;
    m_owned_aircraft         = 0;

    std::memset(&m_owned_tiberium, 0, sizeof(m_owned_tiberium));
    m_balance       = 0;
    m_total_storage = 0;
    std::memset(&m_owned_weed, 0, sizeof(m_owned_weed));
    tiberiumBalanceState = 0;

    std::memset(&m_built_infantry_types, 0, sizeof(m_built_infantry_types));
    std::memset(&m_built_unit_types,     0, sizeof(m_built_unit_types));
    std::memset(&m_built_aircraft_types, 0, sizeof(m_built_aircraft_types));
    std::memset(&m_built_building_types, 0, sizeof(m_built_building_types));
    std::memset(&m_killed_infantry_types, 0, sizeof(m_killed_infantry_types));
    std::memset(&m_killed_unit_types,     0, sizeof(m_killed_unit_types));
    std::memset(&m_killed_aircraft_types, 0, sizeof(m_killed_aircraft_types));
    std::memset(&m_killed_building_types, 0, sizeof(m_killed_building_types));
    std::memset(&miscScoreStats,        0, sizeof(miscScoreStats));
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

    std::memset(factoryStatePadding, 0, sizeof(factoryStatePadding));

    flagCarrierUnit  = nullptr;
    flagCoords   = CellStruct{};

    std::memset(killedUnitsOfHouses,     0, sizeof(killedUnitsOfHouses));
    std::memset(killedBuildingsOfHouses, 0, sizeof(killedBuildingsOfHouses));
    totalKilledUnits     = 0;
    totalKilledBuildings = 0;

    radarVisibleFlag   = 0;
    m_base_spawn_cell = CellStruct{};
    m_base_center     = CellStruct{};
    scorePadding[0] = 0;
    scorePadding[1] = 0;
    scorePadding[2] = 0;
    scorePadding[3] = 0;
    scorePadding[4] = 0;
    scorePadding[5] = 0;
    scorePadding[6] = 0;
    scorePadding[7] = 0;
    scorePadding[8] = 0;
    scorePadding[9] = 0;
    scorePadding[10] = 0;
    scorePadding[11] = 0;
    scorePadding[12] = 0;
    scorePadding[13] = 0;
    scorePadding[14] = 0;
    scorePadding[15] = 0;
    scorePadding[16] = 0;
    scorePadding[17] = 0;
    scorePadding[18] = 0;

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

    attackDelayA   = 0;
    attackDelayB   = 0;
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
    aiTimer1    = TimerStruct{};
    aiTimer2    = TimerStruct{};
    aiTimer3    = TimerStruct{};
    aiTimer4    = TimerStruct{};
    aiTimer5    = TimerStruct{};
    scenarioState       = 0;

    std::memset(m_threat_posed_estimates_padding, 0, sizeof(m_threat_posed_estimates_padding));

    std::memset(m_plain_name, 0, sizeof(m_plain_name));
    std::memset(m_ui_name_string, 0, sizeof(m_ui_name_string));
    std::memset(m_ui_name, 0, sizeof(m_ui_name));

    m_color_scheme_index = 0;
    m_starting_cell      = CellStruct{};
    m_starting_allies    = 0;
    scenarioReserved6      = 0;

    m_waypoint_path         = nullptr;
    m_waypoint_path_count   = 0;
    m_waypoint_path_capacity = 0;

    waypointPathReserved1 = 0;
    waypointPathReserved2 = 0;
    waypointPathReserved3 = 0;
    m_unused_16088  = 0.0;
    m_unused_16090  = 0.0;
    padding_16098 = 0;

    m_prediction_enemy_armor    = 0.0f;
    m_prediction_enemy_air      = 0.0f;
    m_prediction_enemy_infantry = 0.0f;

    m_total_owned_infantry_cost  = 0;
    m_total_owned_vehicle_cost   = 0;
    m_total_owned_aircraft_cost  = 0;
    productionCostState              = 0;

    m_abstract_flags = kHouseFlag;
}

} // namespace gamemd
