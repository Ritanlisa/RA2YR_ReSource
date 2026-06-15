#include "house/house.hpp"
#include "house/house_type.hpp"
#include "system/factory.hpp"
#include "structure/building.hpp"
#include "core/vector.hpp"
#include "fundamentals.hpp"

#include <cstring>

namespace gamemd
{

extern int& CurrentFrame;

namespace {

constexpr uint32_t kHouseFlag = 0x8u;

} // anonymous namespace

HouseClass::HouseClass(HouseTypeClass* pType) noexcept
{
    arrayIndex         = 0;
    buildingType                = pType;
    relatedTags        = nullptr;
    relatedTagsCount  = 0;
    relatedTagsCapacity = 0;

    conYards            = nullptr;
    conYardsCount      = 0;
    conYardsCapacity   = 0;
    buildings            = nullptr;
    buildingsCount      = 0;
    buildingsCapacity   = 0;
    unitRepairStations = nullptr;
    repairStationsCount = 0;
    repairStationsCapacity = 0;
    grinders             = nullptr;
    grindersCount       = 0;
    grindersCapacity    = 0;
    absorbers            = nullptr;
    absorbersCount      = 0;
    absorbersCapacity   = 0;
    bunkers              = nullptr;
    bunkersCount        = 0;
    bunkersCapacity     = 0;
    occupiables          = nullptr;
    occupiablesCount    = 0;
    occupiablesCapacity = 0;
    cloningVats         = nullptr;
    cloningVatsCount   = 0;
    cloningVatsCapacity = 0;
    secretLabs          = nullptr;
    secretLabsCount    = 0;
    secretLabsCapacity = 0;
    psychicDetectionBuildings = nullptr;
    psychicDetectionCount     = 0;
    psychicDetectionCapacity  = 0;
    productionFactory_plants       = nullptr;
    productionFactory_plants_count = 0;
    productionFactory_plants_capacity = 0;

    countResourceGatherers     = 0;
    countResourceDestinations  = 0;
    countWarfactories           = 0;
    infantrySelfHeal           = 0;
    unitsSelfHeal              = 0;

    startingUnits       = nullptr;
    startingUnitsCount = 0;
    startingUnitsCapacity = 0;

    aiDifficulty            = 0;
    firepowerMultiplier     = 1.0;
    groundspeedMultiplier   = 1.0;
    airspeedMultiplier      = 1.0;
    armorMultiplier         = 1.0;
    rofMultiplier           = 1.0;
    costMultiplier          = 1.0;
    buildTimeMultiplier    = 1.0;
    repairDelay             = 0.0;
    buildDelay              = 0.0;
    iqLevel                 = 0;
    techLevel               = 0;
    altAllies               = 0;
    startingCredits         = 0;
    startingEdge            = 0;
    m_unknown_1E4              = 0;
    sideIndex               = 0;

    currentPlayer           = false;
    playerControl           = false;
    production               = false;
    autocreateAllowed       = false;
    aiTriggersActive       = false;
    autoBaseBuilding       = false;
    isDiscoveredByPlayer     = false;
    defeated                 = false;
    isGameOver             = false;
    isWinner                = false;
    isLoser                 = false;
    civiliansEvacuated      = false;
    firestormActive         = false;
    hasThreatNode          = false;
    recheckTechTree        = false;

    selectedPathIndex      = 0;
    std::memset(planningPaths, 0, sizeof(planningPaths));

    visionary            = 0;
    mapIsClear          = false;
    unknownBool242      = false;
    unknownBool243      = false;
    hasBeenThieved      = false;
    repairing             = false;
    unknownBool246      = false;
    unknownBool247      = false;
    unknownBool248      = false;
    allToHunt           = false;
    m_unknown_bool_24A      = false;
    m_unknown_bool_24B      = false;
    iqLevel2             = 0;
    aiMode               = 0;

    supers        = nullptr;
    supersCount  = 0;
    supersCapacity = 0;

    lastBuiltBuildingType  = -1;
    lastBuiltInfantryType  = -1;
    lastBuiltAircraftType  = -1;
    lastBuiltVehicleType   = -1;
    allowWinBlocks          = 0;

    repairTimer          = TimerStruct{};
    m_unknown_timer_28C     = TimerStruct{};
    savourTimer          = TimerStruct{};
    powerBlackoutTimer  = TimerStruct{};
    radarBlackoutTimer  = TimerStruct{};

    side2TechInfiltrated    = false;
    side1TechInfiltrated    = false;
    side0TechInfiltrated    = false;
    barracksInfiltrated      = false;
    warFactoryInfiltrated   = false;

    infantryAltOwner  = 0;
    unitAltOwner      = 0;
    aircraftAltOwner  = 0;
    buildingAltOwner  = 0;

    airportDocks          = 0;
    poweredUnitCenters   = 0;
    m_unknown_2DC            = 0;
    m_unknown_2E0            = 0;
    m_unknown_2E4            = 0;
    ownedUnits            = 0;
    ownedNavy             = 0;
    ownedBuildings        = 0;
    ownedInfantry         = 0;
    ownedAircraft         = 0;

    std::memset(&ownedTiberium, 0, sizeof(ownedTiberium));
    balance       = 0;
    totalStorage = 0;
    std::memset(&ownedWeed, 0, sizeof(ownedWeed));
    unknown324 = 0;

    std::memset(&builtInfantryTypes, 0, sizeof(builtInfantryTypes));
    std::memset(&builtUnitTypes,     0, sizeof(builtUnitTypes));
    std::memset(&builtAircraftTypes, 0, sizeof(builtAircraftTypes));
    std::memset(&builtBuildingTypes, 0, sizeof(builtBuildingTypes));
    std::memset(&killedInfantryTypes, 0, sizeof(killedInfantryTypes));
    std::memset(&killedUnitTypes,     0, sizeof(killedUnitTypes));
    std::memset(&killedAircraftTypes, 0, sizeof(killedAircraftTypes));
    std::memset(&killedBuildingTypes, 0, sizeof(killedBuildingTypes));
    std::memset(&unknownScores,        0, sizeof(unknownScores));
    std::memset(&collectedPowerups,    0, sizeof(collectedPowerups));

    numAirpads        = 0;
    numBarracks       = 0;
    numWarFactories  = 0;
    numConYards      = 0;
    numShipyards      = 0;
    numOrePurifiers  = 0;

    costInfantryMult  = 1.0f;
    costUnitsMult     = 1.0f;
    costAircraftMult  = 1.0f;
    costBuildingsMult = 1.0f;
    costDefensesMult  = 1.0f;

    powerOutput = 0;
    powerDrain  = 0;

    primaryForAircraft   = nullptr;
    primaryForInfantry   = nullptr;
    primaryForVehicles   = nullptr;
    primaryForShips      = nullptr;
    primaryForBuildings  = nullptr;
    primaryUnused1        = nullptr;
    primaryUnused2        = nullptr;
    primaryUnused3        = nullptr;
    primaryForDefenses   = nullptr;

    std::memset(m_unknown_53D0, 0, sizeof(m_unknown_53D0));

    ourFlagCarrier  = nullptr;
    ourFlagCoords   = CellStruct{};

    std::memset(killedUnitsOfHouses,     0, sizeof(killedUnitsOfHouses));
    std::memset(killedBuildingsOfHouses, 0, sizeof(killedBuildingsOfHouses));
    totalKilledUnits     = 0;
    totalKilledBuildings = 0;

    m_unknown_548C   = 0;
    baseSpawnCell = CellStruct{};
    baseCenter     = CellStruct{};
    unknown5498 = 0;
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

    std::memset(&radarVisibleTo, 0, sizeof(radarVisibleTo));

    siloMoney               = 0;
    preferredTargetType    = 0;
    preferredTargetCell    = CellStruct{};
    preferredDefensiveCell = CellStruct{};
    preferredDefensiveCell2 = CellStruct{};
    preferredDefensiveCellStartTime = 0;

    std::memset(&ownedBuildingTypes,  0, sizeof(ownedBuildingTypes));
    std::memset(&ownedUnitTypes,      0, sizeof(ownedUnitTypes));
    std::memset(&ownedInfantryTypes,  0, sizeof(ownedInfantryTypes));
    std::memset(&ownedAircraftTypes,  0, sizeof(ownedAircraftTypes));
    std::memset(&ownedBuildingTypes1, 0, sizeof(ownedBuildingTypes1));
    std::memset(&ownedUnitTypes1,     0, sizeof(ownedUnitTypes1));
    std::memset(&ownedInfantryTypes1, 0, sizeof(ownedInfantryTypes1));
    std::memset(&ownedAircraftTypes1, 0, sizeof(ownedAircraftTypes1));
    std::memset(&ownedBuildingTypes2, 0, sizeof(ownedBuildingTypes2));
    std::memset(&ownedUnitTypes2,     0, sizeof(ownedUnitTypes2));
    std::memset(&ownedInfantryTypes2, 0, sizeof(ownedInfantryTypes2));
    std::memset(&ownedAircraftTypes2, 0, sizeof(ownedAircraftTypes2));

    m_unknown_55F0   = 0;
    m_unknown_55F4   = 0;
    attackDelayA = 0;
    attackDelayB = 0;
    enemyHouseIndex = -1;

    angerNodes        = nullptr;
    angerNodesCount  = 0;
    angerNodesCapacity = 0;
    scoutNodes        = nullptr;
    scoutNodesCount  = 0;
    scoutNodesCapacity = 0;

    unkTimer3 = TimerStruct{};
    unkTimer4 = TimerStruct{};

    producingBuildingTypeIndex = -1;
    producingUnitTypeIndex     = -1;
    producingInfantryTypeIndex = -1;
    producingAircraftTypeIndex = -1;

    ratioAiTriggerTeam   = 0;
    ratioTeamAircraft      = 0;
    ratioTeamInfantry      = 0;
    ratioTeamBuildings     = 0;
    baseDefenseTeamCount  = 0;

    std::memset(dropshipData, 0, sizeof(dropshipData));
    currentDropshipIndex = 0;
    hasCloakingRanges    = 0;

    std::memset(&color,      0, sizeof(color));
    std::memset(&laserColor, 0, sizeof(laserColor));
    colorPadding = 0;

    std::memset(&base, 0, sizeof(base));

    recheckPower    = false;
    recheckRadar    = false;
    spySatActive   = false;
    isBeingDrained = false;

    edge     = 0;
    empTarget  = CellStruct{};
    nukeTarget = CellStruct{};

    allies = 0;

    damageDelayTimer = TimerStruct{};
    teamDelayTimer   = TimerStruct{};
    m_unknown_timer_A    = TimerStruct{};
    m_unknown_timer_B    = TimerStruct{};
    m_unknown_timer_C    = TimerStruct{};
    m_unknown_timer_D    = TimerStruct{};
    m_unknown_timer_E    = TimerStruct{};
    m_unknown_57DC       = 0;

    std::memset(threatPosed_estimates_padding, 0, sizeof(threatPosed_estimates_padding));

    std::memset(plainName, 0, sizeof(plainName));
    std::memset(uiNameString, 0, sizeof(uiNameString));
    std::memset(uiName, 0, sizeof(uiName));

    colorSchemeIndex = 0;
    startingCell      = CellStruct{};
    startingAllies    = 0;
    unknown16060      = 0;

    waypointPath         = nullptr;
    waypointPathCount   = 0;
    waypointPathCapacity = 0;

    m_unknown_1607C = 0;
    unknown16080 = 0;
    unknown16084 = 0;
    unused16088  = 0.0;
    unused16090  = 0.0;
    padding16098 = 0;

    predictionEnemyArmor    = 0.0f;
    predictionEnemyAir      = 0.0f;
    predictionEnemyInfantry = 0.0f;

    totalOwnedInfantryCost  = 0;
    totalOwnedVehicleCost   = 0;
    totalOwnedAircraftCost  = 0;
    m_unknown_160B4              = 0;

    abstractFlags = kHouseFlag;
}

} // namespace gamemd
