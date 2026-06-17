#pragma once

#include "object/abstract.hpp"
#include "house/base.hpp"
#include "house/score.hpp"

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

struct StartingTechnoStruct
{
    TechnoTypeClass* unit;
    CellStruct       cell;
};

struct AngerStruct
{
    HouseClass* house;
    int32_t     angerLevel;
};

struct ScoutStruct
{
    HouseClass* house;
    bool        isPreferred;
};

struct BuildChoiceClass
{
    // TODO: complete from YRpp
};

struct DropshipStruct
{
    TimerStruct      timer;
    uint8_t          m_unknown_C;
    uint8_t          m_align_D[3];
    int32_t          count;
    TechnoTypeClass* buildingTypes[5];
    int32_t          totalCost;
};

struct CounterClass
{
    int32_t* items;
    int32_t  count;
};

struct IndexBitfield
{
    HouseClass** items;
};

struct OwnedTiberiumStruct
{
    float amount1;
    float amount2;
    float amount3;
    float amount4;
};

class HouseClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::House;

    enum { PlayerAtA = 4475, PlayerAtB, PlayerAtC, PlayerAtD, PlayerAtE, PlayerAtF, PlayerAtG, PlayerAtH };

    ~HouseClass() = default;

    AbstractType __stdcall whatAmI() const override { return AbstractType::House; }

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

    bool DoInfantrySelfHeal() const { return infantrySelfHeal > 0; }
    int GetInfSelfHealStep() const;
    bool DoUnitsSelfHeal() const { return unitsSelfHeal > 0; }
    int GetUnitSelfHealStep() const;

    void UpdatePower();
    void CreatePowerOutage(int duration);
    double GetPowerPercentage() const;

    bool HasFullPower() const { return powerOutput >= powerDrain || !powerDrain; }
    bool HasLowPower() const { return powerOutput < powerDrain && powerDrain; }

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
    double getStoragePercentage();

    void AcquiredThreatNode();

    static bool IndexIsMP(int idx);

    void UpdateFactoriesQueues(AbstractType factory_of, bool is_naval, int build_cat) const;

    bool FireLightningStorm(SuperClass* super);
    bool FireParadrop(SuperClass* super);
    bool FirePsyDom(SuperClass* super);
    bool FireGenMutator(SuperClass* super);

    int  AIBaseConstructionupdateLogic();
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
        if (baseCenter != CellStruct{}) return baseCenter;
        return baseSpawnCell;
    }

    unsigned int GetAIDifficultyIndex() const;

    bool IsNeutral() const;
    bool IsPlayer() const;
    bool IsObserver() const;
    static bool IsPlayerObserver();

    // ---- member variables ----

    int32_t                     arrayIndex;
    HouseTypeClass*             buildingType;
    TagClass**                  relatedTags;
    int32_t                     relatedTagsCount;
    int32_t                     relatedTagsCapacity;
    BuildingClass**             conYards;
    int32_t                     conYardsCount;
    int32_t                     conYardsCapacity;
    BuildingClass**             buildings;
    int32_t                     buildingsCount;
    int32_t                     buildingsCapacity;
    BuildingClass**             unitRepairStations;
    int32_t                     repairStationsCount;
    int32_t                     repairStationsCapacity;
    BuildingClass**             grinders;
    int32_t                     grindersCount;
    int32_t                     grindersCapacity;
    BuildingClass**             absorbers;
    int32_t                     absorbersCount;
    int32_t                     absorbersCapacity;
    BuildingClass**             bunkers;
    int32_t                     bunkersCount;
    int32_t                     bunkersCapacity;
    BuildingClass**             occupiables;
    int32_t                     occupiablesCount;
    int32_t                     occupiablesCapacity;
    BuildingClass**             cloningVats;
    int32_t                     cloningVatsCount;
    int32_t                     cloningVatsCapacity;
    BuildingClass**             secretLabs;
    int32_t                     secretLabsCount;
    int32_t                     secretLabsCapacity;
    BuildingClass**             psychicDetectionBuildings;
    int32_t                     psychicDetectionCount;
    int32_t                     psychicDetectionCapacity;
    BuildingClass**             productionFactory_plants;
    int32_t                     productionFactory_plants_count;
    int32_t                     productionFactory_plants_capacity;
    int32_t                     countResourceGatherers;
    int32_t                     countResourceDestinations;
    int32_t                     countWarfactories;
    int32_t                     infantrySelfHeal;
    int32_t                     unitsSelfHeal;
    StartingTechnoStruct**      startingUnits;
    int32_t                     startingUnitsCount;
    int32_t                     startingUnitsCapacity;
    int32_t                     aiDifficulty;
    double                      firepowerMultiplier;
    double                      groundspeedMultiplier;
    double                      airspeedMultiplier;
    double                      armorMultiplier;
    double                      rofMultiplier;
    double                      costMultiplier;
    double                      buildTimeMultiplier;
    double                      repairDelay;
    double                      buildDelay;
    int32_t                     iqLevel;
    int32_t                     techLevel;
    uint32_t                    altAllies;
    int32_t                     startingCredits;
    int32_t                     startingEdge;
    uint32_t                    m_unknown_1E4;
    int32_t                     sideIndex;
    bool                        currentPlayer;
    bool                        playerControl;
    bool                        production;
    bool                        autocreateAllowed;
    uint8_t                     m_unknown_1F0[2];
    bool                        aiTriggersActive;
    bool                        autoBaseBuilding;
    bool                        isDiscoveredByPlayer;
    bool                        defeated;
    bool                        isGameOver;
    bool                        isWinner;
    bool                        isLoser;
    bool                        civiliansEvacuated;
    bool                        firestormActive;
    bool                        hasThreatNode;
    bool                        recheckTechTree;
    uint8_t                     m_unknown_1FD[15];
    int32_t                     selectedPathIndex;
    void*                       planningPaths[12];
    int8_t                      visionary;
    bool                        mapIsClear;
    bool                        unknownBool242;
    bool                        unknownBool243;
    bool                        hasBeenThieved;
    bool                        repairing;
    bool                        unknownBool246;
    bool                        unknownBool247;
    bool                        unknownBool248;
    bool                        allToHunt;
    bool                        m_unknown_bool_24A;
    bool                        m_unknown_bool_24B;
    int32_t                     iqLevel2;
    int32_t                     aiMode;
    SuperClass**                supers;
    int32_t                     supersCount;
    int32_t                     supersCapacity;
    int32_t                     lastBuiltBuildingType;
    int32_t                     lastBuiltInfantryType;
    int32_t                     lastBuiltAircraftType;
    int32_t                     lastBuiltVehicleType;
    int32_t                     allowWinBlocks;
    TimerStruct                 repairTimer;
    TimerStruct                 m_unknown_timer_28C;
    TimerStruct                 savourTimer;
    TimerStruct                 powerBlackoutTimer;
    TimerStruct                 radarBlackoutTimer;
    bool                        side2TechInfiltrated;
    bool                        side1TechInfiltrated;
    bool                        side0TechInfiltrated;
    bool                        barracksInfiltrated;
    bool                        warFactoryInfiltrated;
    uint32_t                    infantryAltOwner;
    uint32_t                    unitAltOwner;
    uint32_t                    aircraftAltOwner;
    uint32_t                    buildingAltOwner;
    int32_t                     airportDocks;
    int32_t                     poweredUnitCenters;
    uint32_t                    m_unknown_2DC;
    uint32_t                    m_unknown_2E0;
    uint32_t                    m_unknown_2E4;
    int32_t                     ownedUnits;
    int32_t                     ownedNavy;
    int32_t                     ownedBuildings;
    int32_t                     ownedInfantry;
    int32_t                     ownedAircraft;
    OwnedTiberiumStruct         ownedTiberium;
    int32_t                     balance;
    int32_t                     totalStorage;
    OwnedTiberiumStruct         ownedWeed;
    uint32_t                    unknown324;
    ScoreStruct                 builtInfantryTypes;
    ScoreStruct                 builtUnitTypes;
    ScoreStruct                 builtAircraftTypes;
    ScoreStruct                 builtBuildingTypes;
    ScoreStruct                 killedInfantryTypes;
    ScoreStruct                 killedUnitTypes;
    ScoreStruct                 killedAircraftTypes;
    ScoreStruct                 killedBuildingTypes;
    ScoreStruct                 unknownScores;
    ScoreStruct                 collectedPowerups;
    int32_t                     numAirpads;
    int32_t                     numBarracks;
    int32_t                     numWarFactories;
    int32_t                     numConYards;
    int32_t                     numShipyards;
    int32_t                     numOrePurifiers;
    float                       costInfantryMult;
    float                       costUnitsMult;
    float                       costAircraftMult;
    float                       costBuildingsMult;
    float                       costDefensesMult;
    int32_t                     powerOutput;
    int32_t                     powerDrain;
    FactoryClass*               primaryForAircraft;
    FactoryClass*               primaryForInfantry;
    FactoryClass*               primaryForVehicles;
    FactoryClass*               primaryForShips;
    FactoryClass*               primaryForBuildings;
    FactoryClass*               primaryUnused1;
    FactoryClass*               primaryUnused2;
    FactoryClass*               primaryUnused3;
    FactoryClass*               primaryForDefenses;
    uint8_t                     m_unknown_53D0[12];
    class UnitClass*           ourFlagCarrier;
    CellStruct                  ourFlagCoords;
    int32_t                     killedUnitsOfHouses[20];
    int32_t                     totalKilledUnits;
    int32_t                     killedBuildingsOfHouses[20];
    int32_t                     totalKilledBuildings;
    uint32_t                    m_unknown_548C;
    CellStruct                  baseSpawnCell;
    CellStruct                  baseCenter;
    uint32_t                    unknown5498;
    uint32_t                    m_unknown_549C;
    uint32_t                    m_unknown_54A0;
    uint32_t                    m_unknown_54A4;
    uint32_t                    m_unknown_54A8;
    uint32_t                    m_unknown_54AC;
    uint32_t                    m_unknown_54B0;
    uint32_t                    m_unknown_54B4;
    uint32_t                    m_unknown_54B8;
    uint32_t                    m_unknown_54BC;
    uint32_t                    m_unknown_54C0;
    uint32_t                    m_unknown_54C4;
    uint32_t                    m_unknown_54C8;
    uint32_t                    m_unknown_54CC;
    uint32_t                    m_unknown_54D0;
    uint32_t                    m_unknown_54D4;
    uint32_t                    m_unknown_54D8;
    uint32_t                    m_unknown_54DC;
    uint32_t                    m_unknown_54E0;
    IndexBitfield               radarVisibleTo;
    int32_t                     siloMoney;
    int32_t                     preferredTargetType;
    CellStruct                  preferredTargetCell;
    CellStruct                  preferredDefensiveCell;
    CellStruct                  preferredDefensiveCell2;
    int32_t                     preferredDefensiveCellStartTime;
    CounterClass                ownedBuildingTypes;
    CounterClass                ownedUnitTypes;
    CounterClass                ownedInfantryTypes;
    CounterClass                ownedAircraftTypes;
    CounterClass                ownedBuildingTypes1;
    CounterClass                ownedUnitTypes1;
    CounterClass                ownedInfantryTypes1;
    CounterClass                ownedAircraftTypes1;
    CounterClass                ownedBuildingTypes2;
    CounterClass                ownedUnitTypes2;
    CounterClass                ownedInfantryTypes2;
    CounterClass                ownedAircraftTypes2;
    uint32_t                    m_unknown_55F0;
    uint32_t                    m_unknown_55F4;
    int32_t                     attackDelayA;
    int32_t                     attackDelayB;
    int32_t                     enemyHouseIndex;
    AngerStruct*                angerNodes;
    int32_t                     angerNodesCount;
    int32_t                     angerNodesCapacity;
    ScoutStruct*                scoutNodes;
    int32_t                     scoutNodesCount;
    int32_t                     scoutNodesCapacity;
    TimerStruct                 unkTimer3;
    TimerStruct                 unkTimer4;
    int32_t                     producingBuildingTypeIndex;
    int32_t                     producingUnitTypeIndex;
    int32_t                     producingInfantryTypeIndex;
    int32_t                     producingAircraftTypeIndex;
    int32_t                     ratioAiTriggerTeam;
    int32_t                     ratioTeamAircraft;
    int32_t                     ratioTeamInfantry;
    int32_t                     ratioTeamBuildings;
    int32_t                     baseDefenseTeamCount;
    DropshipStruct              dropshipData[3];
    int32_t                     currentDropshipIndex;
    uint8_t                     hasCloakingRanges;
    ColorStruct                 color;
    ColorStruct                 laserColor;
    uint8_t                     colorPadding;
    BaseClass                   base;
    bool                        recheckPower;
    bool                        recheckRadar;
    bool                        spySatActive;
    bool                        isBeingDrained;
    int32_t                     edge;
    CellStruct                  empTarget;
    CellStruct                  nukeTarget;
    uint32_t                    allies;
    TimerStruct                 damageDelayTimer;
    TimerStruct                 teamDelayTimer;
    TimerStruct                 m_unknown_timer_A;
    TimerStruct                 m_unknown_timer_B;
    TimerStruct                 m_unknown_timer_C;
    TimerStruct                 m_unknown_timer_D;
    TimerStruct                 m_unknown_timer_E;
    uint32_t                    m_unknown_57DC;
    // NOTE: threatPosed_estimates[130][130] takes ~67,600 bytes - huge grid
    // TODO: verify exact layout from IDA, using placeholder
    uint8_t                     threatPosed_estimates_padding[67600];
    char                        plainName[21];
    char                        uiNameString[32];
    wchar_t                     uiName[21];
    int32_t                     colorSchemeIndex;
    CellStruct                  startingCell;
    uint32_t                    startingAllies;
    uint32_t                    unknown16060;
    void**                      waypointPath;
    int32_t                     waypointPathCount;
    int32_t                     waypointPathCapacity;
    uint32_t                    m_unknown_1607C;
    uint32_t                    unknown16080;
    uint32_t                    unknown16084;
    double                      unused16088;
    double                      unused16090;
    uint32_t                    padding16098;
    float                       predictionEnemyArmor;
    float                       predictionEnemyAir;
    float                       predictionEnemyInfantry;
    int32_t                     totalOwnedInfantryCost;
    int32_t                     totalOwnedVehicleCost;
    int32_t                     totalOwnedAircraftCost;
    uint32_t                    m_unknown_160B4;

    // TODO: complete remaining members from YRpp (very large class ~969 lines)

protected:
    HouseClass() = default;
    HouseClass(HouseTypeClass* pType) noexcept;
};

} // namespace gamemd

