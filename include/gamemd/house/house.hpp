#pragma once

#include "..\object\abstract.hpp"

#include <cstdint>

namespace gamemd {

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif
#ifndef GAMEMD_USING_CoordStruct
#define GAMEMD_USING_CoordStruct
using ra2::game::CoordStruct;
#endif
#ifndef GAMEMD_USING_CellStruct
#define GAMEMD_USING_CellStruct
using ra2::game::CellStruct;
#endif
#ifndef GAMEMD_USING_TimerStruct
#define GAMEMD_USING_TimerStruct
using ra2::game::TimerStruct;
#endif








class HouseClass;
class HouseTypeClass;
class BuildingClass;
class BuildingTypeClass;
class FactoryClass;
class TechnoTypeClass;
class AircraftTypeClass;
class InfantryTypeClass;
class UnitTypeClass;
class SuperClass;
class TagClass;
class FootClass;
struct ColorStruct;
class AnimClass;
class BulletClass;
class CellClass;
struct WaypointClass;
#ifndef GAMEMD_USING_TechnoClass
#define GAMEMD_USING_TechnoClass
using ra2::game::TechnoClass;
#endif
#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif

struct ScoreStruct
{
    int32_t m_counts[512];
    int32_t m_num_counts;
    int32_t m_byte_order;
};

struct StartingTechnoStruct
{
    TechnoTypeClass* m_unit;
    CellStruct       m_cell;
};

struct AngerStruct
{
    HouseClass* m_house;
    int32_t     m_anger_level;
};

struct ScoutStruct
{
    HouseClass* m_house;
    bool        m_is_preferred;
};

struct BuildChoiceClass
{
    // TODO: complete from YRpp
};

struct BaseNodeClass
{
    int32_t     m_building_type_index;
    CellStruct  m_map_coords;
    bool        m_placed;
    int32_t     m_attempts;
};

struct BaseClass
{
    BaseNodeClass*  m_base_nodes;
    int32_t         m_base_node_count;
    int32_t         m_base_node_capacity;
    int32_t         m_percent_built;
    CellStruct*     m_cells_24;
    int32_t         m_cells_24_count;
    int32_t         m_cells_24_capacity;
    CellStruct*     m_cells_38;
    int32_t         m_cells_38_count;
    int32_t         m_cells_38_capacity;
    CellStruct      m_center;
    uint8_t         reservedBaseData[32];  // +0x54, BaseClass reserved space
    HouseClass*     m_owner;
};

struct DropshipStruct
{
    TimerStruct      m_timer;
    uint8_t          dropshipFlags;        // +0xC, dropship state flags
    uint8_t          align_D[3];
    int32_t          m_count;
    TechnoTypeClass* m_types[5];
    int32_t          m_total_cost;
};

struct CounterClass
{
    int32_t* m_items;
    int32_t  m_count;
};

struct IndexBitfield
{
    HouseClass** m_items;
};

struct OwnedTiberiumStruct
{
    float m_amount1;
    float m_amount2;
    float m_amount3;
    float m_amount4;
};

class HouseClass : public AbstractClass
{
public:
    static constexpr AbstractType kAbsDeriveID = AbstractType::House;

    enum { PlayerAtA = 4475, PlayerAtB, PlayerAtC, PlayerAtD, PlayerAtE, PlayerAtF, PlayerAtG, PlayerAtH };

    ~HouseClass() = default;

    AbstractType __stdcall WhatAmI() const override { return AbstractType::House; }

    // --- TODO: IHouse / IPublicHouse / IConnectionPointContainer interfaces from YRpp ---

    bool IsAlliedWith(int idx_house) const;
    bool IsAlliedWith(const HouseClass* house) const;
    bool IsAlliedWith(const ObjectClass* object) const;
    bool IsAlliedWith(const AbstractClass* abstract) const;

    void MakeAlly(int house_idx, bool announce);
    void MakeAlly(HouseClass* who, bool announce);
    void MakeEnemy(HouseClass* who, bool announce);
    void AllyAIHouses();

    void SDDTORAllAndTriggers();
    void AcceptDefeat();
    void DestroyAll();
    void DestroyAllBuildings();
    void DestroyAllNonBuildingsNonNaval();
    void DestroyAllNonBuildingsNaval();

    void RespawnStartingBuildings();
    void RespawnStartingForces();

    uint8_t Win(bool save_something);
    uint8_t Lose(bool save_something);

    bool CanAlly(HouseClass* other) const;
    bool CanOverpower(TechnoClass* target) const;

    void LostPoweredCenter(TechnoTypeClass* type);
    void GainedPoweredCenter(TechnoTypeClass* type);

    bool DoInfantrySelfHeal() const { return m_infantry_self_heal > 0; }
    int GetInfSelfHealStep() const;
    bool DoUnitsSelfHeal() const { return m_units_self_heal > 0; }
    int GetUnitSelfHealStep() const;

    void UpdatePower();
    void CreatePowerOutage(int duration);
    double GetPowerPercentage() const;

    bool HasFullPower() const { return m_power_output >= m_power_drain || !m_power_drain; }
    bool HasLowPower() const { return m_power_output < m_power_drain && m_power_drain; }

    void CreateRadarOutage(int duration);
    void ReshroudMap();
    void Cheer();

    void BuildingUnderAttack(BuildingClass* building);
    void TakeMoney(int amount);
    void GiveMoney(int amount);

    bool CanTransactMoney(int amount) const { return amount > 0 || AvailableMoney() >= -amount; }
    void TransactMoney(int amount)
    {
        if (amount > 0) GiveMoney(amount);
        else TakeMoney(-amount);
    }

    int AvailableMoney() const;

    void GiveTiberium(float amount, int type);
    void UpdateAllSilos(int prev_storage, int prev_total_storage);
    double GetStoragePercentage();

    void AcquiredThreatNode();

    static bool IndexIsMP(int idx);

    void UpdateFactoriesQueues(AbstractType factory_of, bool is_naval, int build_cat) const;

    bool FireLightningStorm(SuperClass* super);
    bool FireParadrop(SuperClass* super);
    bool FirePsyDom(SuperClass* super);
    bool FireGenMutator(SuperClass* super);

    int  AIBaseConstructionUpdate();
    void AITryFireSW();
    bool FireSW(int idx, const CellStruct& coords);

    CellStruct* PickTargetByType(CellStruct& out, TargetType type) const;
    CellStruct PickTargetByType(TargetType type) const
    {
        CellStruct out;
        PickTargetByType(out, type);
        return out;
    }

    CellStruct* PickIonCannonTarget(CellStruct& out) const;
    CellStruct PickIonCannonTarget() const
    {
        CellStruct out;
        PickIonCannonTarget(out);
        return out;
    }

    bool IsIonCannonEligibleTarget(const TechnoClass* techno) const;

    void UpdateFlagCoords(class UnitClass* new_carrier, uint32_t unk);
    void DroppedFlag(CellStruct* where, class UnitClass* who);
    char PickedUpFlag(class UnitClass* who, uint32_t unk);

    FactoryClass* GetPrimaryFactory(AbstractType abs_id, bool naval, int build_cat) const;
    void SetPrimaryFactory(FactoryClass* factory, AbstractType abs_id, bool naval, int build_cat);

    const CellStruct& GetBaseCenter() const
    {
        if (m_base_center != CellStruct{}) return m_base_center;
        return m_base_spawn_cell;
    }

    unsigned int GetAIDifficultyIndex() const;

    bool IsNeutral() const;
    bool IsPlayer() const;
    bool IsObserver() const;
    static bool IsPlayerObserver();

    // ---- member variables ----

    int32_t                     m_array_index;
    HouseTypeClass*             m_type;
    TagClass**                  m_related_tags;
    int32_t                     m_related_tags_count;
    int32_t                     m_related_tags_capacity;
    BuildingClass**             m_con_yards;
    int32_t                     m_con_yards_count;
    int32_t                     m_con_yards_capacity;
    BuildingClass**             m_buildings;
    int32_t                     m_buildings_count;
    int32_t                     m_buildings_capacity;
    BuildingClass**             m_unit_repair_stations;
    int32_t                     m_repair_stations_count;
    int32_t                     m_repair_stations_capacity;
    BuildingClass**             m_grinders;
    int32_t                     m_grinders_count;
    int32_t                     m_grinders_capacity;
    BuildingClass**             m_absorbers;
    int32_t                     m_absorbers_count;
    int32_t                     m_absorbers_capacity;
    BuildingClass**             m_bunkers;
    int32_t                     m_bunkers_count;
    int32_t                     m_bunkers_capacity;
    BuildingClass**             m_occupiables;
    int32_t                     m_occupiables_count;
    int32_t                     m_occupiables_capacity;
    BuildingClass**             m_cloning_vats;
    int32_t                     m_cloning_vats_count;
    int32_t                     m_cloning_vats_capacity;
    BuildingClass**             m_secret_labs;
    int32_t                     m_secret_labs_count;
    int32_t                     m_secret_labs_capacity;
    BuildingClass**             m_psychic_detection_buildings;
    int32_t                     m_psychic_detection_count;
    int32_t                     m_psychic_detection_capacity;
    BuildingClass**             m_factory_plants;
    int32_t                     m_factory_plants_count;
    int32_t                     m_factory_plants_capacity;
    int32_t                     m_count_resource_gatherers;
    int32_t                     m_count_resource_destinations;
    int32_t                     m_count_warfactories;
    int32_t                     m_infantry_self_heal;
    int32_t                     m_units_self_heal;
    StartingTechnoStruct**      m_starting_units;
    int32_t                     m_starting_units_count;
    int32_t                     m_starting_units_capacity;
    int32_t                     m_ai_difficulty;
    double                      m_firepower_multiplier;
    double                      m_groundspeed_multiplier;
    double                      m_airspeed_multiplier;
    double                      m_armor_multiplier;
    double                      m_rof_multiplier;
    double                      m_cost_multiplier;
    double                      m_build_time_multiplier;
    double                      m_repair_delay;
    double                      m_build_delay;
    int32_t                     m_iq_level;
    int32_t                     m_tech_level;
    uint32_t                    m_alt_allies;
    int32_t                     m_starting_credits;
    int32_t                     m_starting_edge;
    uint32_t                    startingAllies2;     // +0x1E4
    int32_t                     m_side_index;
    bool                        m_current_player;
    bool                        m_player_control;
    bool                        m_production;
    bool                        m_autocreate_allowed;
    uint8_t                     playerStatePadding[2]; // +0x1F0
    bool                        m_ai_triggers_active;
    bool                        m_auto_base_building;
    bool                        m_discovered_by_player;
    bool                        m_defeated;
    bool                        m_is_game_over;
    bool                        m_is_winner;
    bool                        m_is_loser;
    bool                        m_civilians_evacuated;
    bool                        m_firestorm_active;
    bool                        m_has_threat_node;
    bool                        m_recheck_tech_tree;
    uint8_t                     techTreePadding[15];   // +0x1FD
    int32_t                     m_selected_path_index;
    void*                       m_planning_paths[12];
    int8_t                      m_visionary;
    bool                        m_map_is_clear;
    bool                        sideNegotiationFlag2;  // +0x242
    bool                        sideNegotiationFlag3;  // +0x243
    bool                        m_has_been_thieved;
    bool                        m_repairing;
    bool                        aiStateFlag0;           // +0x246
    bool                        aiStateFlag1;           // +0x247
    bool                        aiStateFlag2;           // +0x248
    bool                        m_all_to_hunt;
    bool                        aiStateFlag3;           // +0x24A
    bool                        aiStateFlag4;           // +0x24B
    int32_t                     m_iq_level2;
    int32_t                     m_ai_mode;
    SuperClass**                m_supers;
    int32_t                     m_supers_count;
    int32_t                     m_supers_capacity;
    int32_t                     m_last_built_building_type;
    int32_t                     m_last_built_infantry_type;
    int32_t                     m_last_built_aircraft_type;
    int32_t                     m_last_built_vehicle_type;
    int32_t                     m_allow_win_blocks;
    TimerStruct                 m_repair_timer;
    TimerStruct                 aiTeamAttackTimer;       // +0x28C
    TimerStruct                 m_savour_timer;
    TimerStruct                 m_power_blackout_timer;
    TimerStruct                 m_radar_blackout_timer;
    bool                        m_side2_tech_infiltrated;
    bool                        m_side1_tech_infiltrated;
    bool                        m_side0_tech_infiltrated;
    bool                        m_barracks_infiltrated;
    bool                        m_war_factory_infiltrated;
    uint32_t                    m_infantry_alt_owner;
    uint32_t                    m_unit_alt_owner;
    uint32_t                    m_aircraft_alt_owner;
    uint32_t                    m_building_alt_owner;
    int32_t                     m_airport_docks;
    int32_t                     m_powered_unit_centers;
    uint32_t                    factoryOccupancy1;       // +0x2DC, factory slot tracking
    uint32_t                    factoryOccupancy2;       // +0x2E0
    uint32_t                    factoryOccupancy3;       // +0x2E4
    int32_t                     m_owned_units;
    int32_t                     m_owned_navy;
    int32_t                     m_owned_buildings;
    int32_t                     m_owned_infantry;
    int32_t                     m_owned_aircraft;
    OwnedTiberiumStruct         m_owned_tiberium;
    int32_t                     m_balance;
    int32_t                     m_total_storage;
    OwnedTiberiumStruct         m_owned_weed;
    uint32_t                    tiberiumBalanceState;    // +0x324
    ScoreStruct                 m_built_infantry_types;
    ScoreStruct                 m_built_unit_types;
    ScoreStruct                 m_built_aircraft_types;
    ScoreStruct                 m_built_building_types;
    ScoreStruct                 m_killed_infantry_types;
    ScoreStruct                 m_killed_unit_types;
    ScoreStruct                 m_killed_aircraft_types;
    ScoreStruct                 m_killed_building_types;
    ScoreStruct                 miscScoreStats;          // +unknown_scores
    ScoreStruct                 m_collected_powerups;
    int32_t                     m_num_airpads;
    int32_t                     m_num_barracks;
    int32_t                     m_num_war_factories;
    int32_t                     m_num_con_yards;
    int32_t                     m_num_shipyards;
    int32_t                     m_num_ore_purifiers;
    float                       m_cost_infantry_mult;
    float                       m_cost_units_mult;
    float                       m_cost_aircraft_mult;
    float                       m_cost_buildings_mult;
    float                       m_cost_defenses_mult;
    int32_t                     m_power_output;
    int32_t                     m_power_drain;
    FactoryClass*               m_primary_for_aircraft;
    FactoryClass*               m_primary_for_infantry;
    FactoryClass*               m_primary_for_vehicles;
    FactoryClass*               m_primary_for_ships;
    FactoryClass*               m_primary_for_buildings;
    FactoryClass*               m_primary_unused1;
    FactoryClass*               m_primary_unused2;
    FactoryClass*               m_primary_unused3;
    FactoryClass*               m_primary_for_defenses;
    uint8_t                     factoryStatePadding[12];  // +0x53D0
    UnitClass*                  flagCarrierUnit;         // +0x53DC
    CellStruct                  flagCoords;              // +0x53E0
    int32_t                     killedUnitsOfHouses[20]; // +0x53E8, per-house kill count
    int32_t                     totalKilledUnits;        // +0x5438
    int32_t                     killedBuildingsOfHouses[20]; // +0x543C
    int32_t                     totalKilledBuildings;    // +0x548C
    int32_t                     radarVisibleFlag;        // +0x5490
    CellStruct                  m_base_spawn_cell;       // +0x5494  (IDA: BaseSpawnCell)
    CellStruct                  m_base_center;           // +0x549C  (IDA: BaseCenter)
    int32_t                     scorePadding[15];         // +0x54A4 to +0x54E0, reserved
    IndexBitfield               m_radar_visible_to;
    int32_t                     m_silo_money;
    int32_t                     m_preferred_target_type;
    CellStruct                  m_preferred_target_cell;
    CellStruct                  m_preferred_defensive_cell;
    CellStruct                  m_preferred_defensive_cell2;
    int32_t                     m_preferred_defensive_cell_start_time;
    CounterClass                m_owned_building_types;
    CounterClass                m_owned_unit_types;
    CounterClass                m_owned_infantry_types;
    CounterClass                m_owned_aircraft_types;
    CounterClass                m_owned_building_types_1;
    CounterClass                m_owned_unit_types_1;
    CounterClass                m_owned_infantry_types_1;
    CounterClass                m_owned_aircraft_types_1;
    CounterClass                m_owned_building_types_2;
    CounterClass                m_owned_unit_types_2;
    CounterClass                m_owned_infantry_types_2;
    CounterClass                m_owned_aircraft_types_2;
    uint32_t                    attackDelayA;            // +0x55F0, unused
    uint32_t                    attackDelayB;            // +0x55F4, unused
    int32_t                     m_attack_delay_a;
    int32_t                     m_attack_delay_b;
    int32_t                     m_enemy_house_index;
    AngerStruct*                m_anger_nodes;
    int32_t                     m_anger_nodes_count;
    int32_t                     m_anger_nodes_capacity;
    ScoutStruct*                m_scout_nodes;
    int32_t                     m_scout_nodes_count;
    int32_t                     m_scout_nodes_capacity;
    TimerStruct                 m_unk_timer3;
    TimerStruct                 m_unk_timer4;
    int32_t                     m_producing_building_type_index;
    int32_t                     m_producing_unit_type_index;
    int32_t                     m_producing_infantry_type_index;
    int32_t                     m_producing_aircraft_type_index;
    int32_t                     m_ratio_ai_trigger_team;
    int32_t                     m_ratio_team_aircraft;
    int32_t                     m_ratio_team_infantry;
    int32_t                     m_ratio_team_buildings;
    int32_t                     m_base_defense_team_count;
    DropshipStruct              m_dropship_data[3];
    int32_t                     m_current_dropship_index;
    uint8_t                     m_has_cloaking_ranges;
    ColorStruct                 m_color;
    ColorStruct                 m_laser_color;
    uint8_t                     m_color_padding;
    BaseClass                   m_base;
    bool                        m_recheck_power;
    bool                        m_recheck_radar;
    bool                        m_spy_sat_active;
    bool                        m_is_being_drained;
    int32_t                     m_edge;
    CellStruct                  m_emp_target;
    CellStruct                  m_nuke_target;
    uint32_t                    m_allies;
    TimerStruct                 m_damage_delay_timer;
    TimerStruct                 m_team_delay_timer;
    TimerStruct                 aiTimer1;                // scenario timer slot A
    TimerStruct                 aiTimer2;                // scenario timer slot B
    TimerStruct                 aiTimer3;                // scenario timer slot C
    TimerStruct                 aiTimer4;                // scenario timer slot D
    TimerStruct                 aiTimer5;                // scenario timer slot E
    uint32_t                    scenarioState;           // +0x57DC
    // NOTE: m_threat_posed_estimates[130][130] takes ~67,600 bytes - huge grid
    // TODO: verify exact layout from IDA, using placeholder
    uint8_t                     m_threat_posed_estimates_padding[67600];
    char                        m_plain_name[21];
    char                        m_ui_name_string[32];
    wchar_t                     m_ui_name[21];
    int32_t                     m_color_scheme_index;
    CellStruct                  m_starting_cell;
    uint32_t                    m_starting_allies;
    uint32_t                    scenarioReserved6;       // +0x16060
    void**                      m_waypoint_path;
    int32_t                     m_waypoint_path_count;
    int32_t                     m_waypoint_path_capacity;
    uint32_t                    waypointPathReserved1;   // +0x1607C
    uint32_t                    waypointPathReserved2;   // +0x16080
    uint32_t                    waypointPathReserved3;   // +0x16084
    double                      m_unused_16088;
    double                      m_unused_16090;
    uint32_t                    padding_16098;
    float                       m_prediction_enemy_armor;
    float                       m_prediction_enemy_air;
    float                       m_prediction_enemy_infantry;
    int32_t                     m_total_owned_infantry_cost;
    int32_t                     m_total_owned_vehicle_cost;
    int32_t                     m_total_owned_aircraft_cost;
    uint32_t                    productionCostState;     // +0x160B4

    // TODO: complete remaining members from YRpp (very large class ~969 lines)

protected:
    HouseClass() = default;
    HouseClass(HouseTypeClass* pType) noexcept;
};

} // namespace gamemd

