// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
#ifndef GAMEMD_TREE_UNIVERSE  // G42.33 批 3: 宏 TU 内由树头 using 提供
class TechnoClass;
#endif
struct BuildingClass;  // fix_fwd_type_supply
struct StartingTechnoStruct;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
#ifndef GAMEMD_TREE_UNIVERSE  // G42.33 批 3: 宏 TU 内由树头 using 提供
struct AbstractClass;
#endif
struct SuperClass;  // fix_fwd_type_supply
struct ObjectClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct Tactical;  // fix_fwd_type_supply
struct ObjectTypeClass;  // fix_fwd_type_supply
struct WeaponTypeClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct FactoryClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct AngerStruct;  // fix_fwd_type_supply
struct ScoutStruct;  // fix_fwd_type_supply
struct TimerStruct;  // fix_fwd_type_supply
#ifndef GAMEMD_TREE_UNIVERSE
struct CellStruct;  // fix_fwd_type_supply
#endif // GAMEMD_TREE_UNIVERSE
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorCursor;  // fix_fwd_type_supply

#ifndef GAMEMD_G2_HouseClass_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_HouseClass_DEF 1
struct HouseClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    unsigned int q012;  // 0x12
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    void* referenceCount;  // 0x1C [X30:type_map]
    void * NeedsSaveOrLink;  // 0x20
    void* vtable5;  // 0x24
    void* vtable6;  // 0x28
    void* vtable7;  // 0x2C
    int relatedTagsCount;  // 0x30 [X30:type_map]
    unsigned int alignmentPadding;  // 0x33
    int relatedTagsCapacity;  // 0x34 [X30:type_map]
    unsigned int q02B;  // 0x2B
    char u32_2A;  // 0x2A
    char u32_1E;  // 0x1E
    int arrayIndex;  // 0x36
    BuildingClass** conYards;  // 0x38
    int conYardsCount;  // 0x3C [X30:type_map]
    int conYardsCapacity;  // 0x40 [X30:type_map]
    BuildingClass** buildings;  // 0x44
    int buildingsCount;  // 0x48 [X30:type_map]
    BuildingClass* buildingsCapacity;  // 0x4C [X30:type_map]
    BuildingClass** unitRepairStations;  // 0x50
int repairStationsCount;  // 0x54 [X35-L7 kind=int]
    int repairStationsCapacity;  // 0x58 [X30:type_map]
    BuildingClass** grinders;  // 0x5C
    int grindersCount;  // 0x60 [X30:type_map]
int grindersCapacity;  // 0x64 [X35-L7 kind=int]
    BuildingClass** absorbers;  // 0x68
    int absorbersCount;  // 0x6C [X30:type_map]
    int absorbersCapacity;  // 0x70 [X30:type_map]
    BuildingClass** bunkers;  // 0x74
    int bunkersCount;  // 0x78 [X30:type_map]
    int bunkersCapacity;  // 0x7C [X30:type_map]
    BuildingClass** occupiables;  // 0x80
int occupiablesCount;  // 0x84 [X35-L7 kind=int]
    int occupiablesCapacity;  // 0x88 [X30:type_map]
    BuildingClass** cloningVats;  // 0x8C
    int cloningVatsCount;  // 0x90 [X30:type_map]
int cloningVatsCapacity;  // 0x94 [X35-L7 kind=int]
    BuildingClass** secretLabs;  // 0x98
    int secretLabsCount;  // 0x9C [X30:type_map]
    int secretLabsCapacity;  // 0xA0 [X30:type_map]
    BuildingClass** psychicDetectionBuildings;  // 0xA4
    int psychicDetectionCount;  // 0xA8 [X30:type_map]
    void* psychicDetectionCapacity;  // 0xAC [X30:type_map]
    BuildingClass** productionFactory_plants;  // 0xB0
    int productionFactory_plants_count;  // 0xB4 [X30:type_map]
    int productionFactory_plants_capacity;  // 0xB8 [X30:type_map]
    char countResourceGatherers[4];  // 0xBC
    char countResourceDestinations[4];  // 0xC0
    char countWarfactories[4];  // 0xC4
    void* infantrySelfHeal;  // 0xC8 [X30:type_map]
    void* unitsSelfHeal;  // 0xCC [X30:type_map]
    StartingTechnoStruct** startingUnits;  // 0xD0
    char startingUnitsCount[4];  // 0xD4
    char startingUnitsCapacity[4];  // 0xD8
    char aiDifficulty[4];  // 0xDC
    unsigned int q093;  // 0x93
    unsigned int q083;  // 0x83
    unsigned int u32_81;  // 0x81
    unsigned int q079;  // 0x79
    int u32_77;  // 0x77
    unsigned int q075;  // 0x75
    unsigned int u32_73;  // 0x73
    unsigned int u32_72;  // 0x72
    unsigned int u32_71;  // 0x71
    unsigned int u32_6F;  // 0x6F
    unsigned int u32_6E;  // 0x6E
    unsigned int u32_6D;  // 0x6D
    unsigned int u32_6B;  // 0x6B
    unsigned int u32_6A;  // 0x6A
    unsigned int u32_69;  // 0x69
    unsigned int u32_67;  // 0x67
    unsigned int u32_66;  // 0x66
    unsigned int u32_65;  // 0x65
    unsigned int u32_63;  // 0x63
    unsigned int u32_62;  // 0x62
    unsigned int u32_61;  // 0x61
    unsigned int u32_5F;  // 0x5F
    unsigned int q04F;  // 0x4F
    unsigned int q04E;  // 0x4E
    unsigned int u32_43;  // 0x43
    unsigned int q042;  // 0x42
    unsigned int q037;  // 0x37
    double firepowerMultiplier;  // 0xE0
    double groundspeedMultiplier;  // 0xE8
    double airspeedMultiplier;  // 0xF0
    double armorMultiplier;  // 0xF8
    double rofMultiplier;  // 0x100
    double costMultiplier;  // 0x108
    BuildingClass* buildTimeMultiplier;  // 0x110 [X30:type_map]
    double repairDelay;  // 0x118
    double buildDelay;  // 0x120
int iqLevel;  // 0x128 [X35-L7 kind=int]
    void* techLevel;  // 0x12C [X30:type_map]
    unsigned int altAllies;  // 0x130
    int startingCredits;  // 0x134 [X30:type_map]
int startingEdge;  // 0x138 [X35-L7 kind=int]
    int techInfiltrationFlags;  // 0x164
    int productionInfiltrationFlags;  // 0x168
    AbstractClass* IQ;  // 0x1D0 [X30:type_map]
    unsigned int TechLevel;  // 0x1D4
    unsigned int Credits;  // 0x1DC
    unsigned int HouseClass_field_1E4;  // 0x1E4
    int sideIndex;  // 0x1E8 [X30:type_map]
    bool currentPlayer;  // 0x1EC
    bool PlayerControl;  // 0x1ED
    bool production;  // 0x1EE
    bool autocreateAllowed;  // 0x1EF
    unsigned char HouseClass_field_1F0;  // 0x1F0
    unsigned int u32_1F1;  // 0x1F1
    bool aiTriggersActive;  // 0x1F2
    bool autoBaseBuilding;  // 0x1F3
    bool isDiscoveredByPlayer;  // 0x1F4
    bool defeated;  // 0x1F5
    bool isGameOver;  // 0x1F6
    bool isWinner;  // 0x1F7
    bool isLoser;  // 0x1F8
    bool civiliansEvacuated;  // 0x1F9
    bool firestormActive;  // 0x1FA
    bool hasThreatNode;  // 0x1FB
    bool recheckTechTree;  // 0x1FC
    unsigned char HouseClass_field_1FD;  // 0x1FD
    char selectedPathIndex[4];  // 0x20C
    void* planningPaths;  // 0x210
    int visionary;  // 0x240 [X30:type_map]
    unsigned int u32_208;  // 0x208
    bool mapIsClear;  // 0x241
    bool unknownBool242;  // 0x242
    bool unknownBool243;  // 0x243
    bool hasBeenThieved;  // 0x244
    bool repairing;  // 0x245
    bool unknownBool246;  // 0x246
    bool unknownBool247;  // 0x247
    bool unknownBool248;  // 0x248
    bool allToHunt;  // 0x249
    bool HouseClass_field_bool_24A;  // 0x24A
    bool HouseClass_field_bool_24B;  // 0x24B
    int iqLevel2;  // 0x24C [X30:type_map]
    int aiMode;  // 0x250 [X30:type_map]
    SuperClass** supers;  // 0x254
    int supersCount;  // 0x258 [X30:type_map]
    int supersCapacity;  // 0x25C [X30:type_map]
int lastBuiltBuildingType;  // 0x260 [X35-L7 kind=int]
    int lastBuiltInfantryType;  // 0x264 [X30:type_map]
int lastBuiltAircraftType;  // 0x268 [X35-L7 kind=int]
    char lastBuiltVehicleType[4];  // 0x26C
int allowWinBlocks;  // 0x270 [X35-L7 kind=int]
    char repairTimer[12];  // 0x274
    char HouseClass_field_timer_28C[12];  // 0x28C
    char savourTimer[12];  // 0x298
    char powerBlackoutTimer[12];  // 0x2A4
    char radarBlackoutTimer[12];  // 0x2B0
    bool side2TechInfiltrated;  // 0x2BC
    bool side1TechInfiltrated;  // 0x2BD
    bool side0TechInfiltrated;  // 0x2BE
    bool barracksInfiltrated;  // 0x2BF
    bool warFactoryInfiltrated;  // 0x2C0
    unsigned int infantryAltOwner;  // 0x2C4
    unsigned int unitAltOwner;  // 0x2C8
    unsigned int aircraftAltOwner;  // 0x2CC
    unsigned int buildingAltOwner;  // 0x2D0
    int airportDocks;  // 0x2D4 [X30:type_map]
    int poweredUnitCenters;  // 0x2D8 [X30:type_map]
    unsigned int HouseClass_field_2DC;  // 0x2DC
    unsigned int HouseClass_field_2E0;  // 0x2E0
    unsigned int HouseClass_field_2E4;  // 0x2E4
    int ownedUnits;  // 0x2E8 [X30:type_map]
    char ownedNavy[4];  // 0x2EC
    int ownedBuildings;  // 0x2F0 [X30:type_map]
    int ownedInfantry;  // 0x2F4 [X30:type_map]
    int ownedAircraft;  // 0x2F8 [X30:type_map]
    char ownedTiberium[16];  // 0x2FC
    int balance;  // 0x30C [X30:type_map]
    int totalStorage;  // 0x310 [X30:type_map]
    char ownedWeed[16];  // 0x314
    unsigned int unknown324;  // 0x324
    char builtInfantryTypes[2056];  // 0x328
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass * ptr_390;  // 0x390
#else
    void* ptr_390;  // 0x390  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass * ptr_458;  // 0x458
#else
    void* ptr_458;  // 0x458  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass * ptr_474;  // 0x474
#else
    void* ptr_474;  // 0x474  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass * ptr_734;  // 0x734
#else
    void* ptr_734;  // 0x734  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass * ptr_938;  // 0x938
#else
    void* ptr_938;  // 0x938  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass * ptr_970;  // 0x970
#else
    void* ptr_970;  // 0x970  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
    char builtUnitTypes[2056];  // 0xB30
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass * ptr_1158;  // 0x1158
#else
    void* ptr_1158;  // 0x1158  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass * ptr_1174;  // 0x1174
#else
    void* ptr_1174;  // 0x1174  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass * ptr_1194;  // 0x1194
#else
    void* ptr_1194;  // 0x1194  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass * ptr_1204;  // 0x1204
#else
    void* ptr_1204;  // 0x1204  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass * ptr_1220;  // 0x1220
#else
    void* ptr_1220;  // 0x1220  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass * ptr_1258;  // 0x1258
#else
    void* ptr_1258;  // 0x1258  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass * ptr_1274;  // 0x1274
#else
    void* ptr_1274;  // 0x1274  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass * ptr_1290;  // 0x1290
#else
    void* ptr_1290;  // 0x1290  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
    char builtAircraftTypes[2056];  // 0x1338
    char builtBuildingTypes[2056];  // 0x1B40
    char killedInfantryTypes[2056];  // 0x2348
    char killedUnitTypes[2056];  // 0x2B50
    char killedAircraftTypes[2056];  // 0x3358
    char killedBuildingTypes[2056];  // 0x3B60
    char unknownScores[2056];  // 0x4368
    char collectedPowerups[2056];  // 0x4B70
    int numAirpads;  // 0x5378 [X30:type_map]
    int numBarracks;  // 0x537C [X30:type_map]
    int numConYards;  // 0x5384 [X30:type_map]
    int numShipyards;  // 0x5388 [X30:type_map]
    int numOrePurifiers;  // 0x538C [X30:type_map]
    float costInfantryMult;  // 0x5390
    float costUnitsMult;  // 0x5394
    float costAircraftMult;  // 0x5398
    float costBuildingsMult;  // 0x539C
    float costDefensesMult;  // 0x53A0
    int powerOutput;  // 0x53A4 [X30:type_map]
    int powerDrain;  // 0x53A8 [X30:type_map]
    FactoryClass* primaryForAircraft;  // 0x53AC
    FactoryClass* primaryForInfantry;  // 0x53B0
    FactoryClass* primaryForVehicles;  // 0x53B4
    FactoryClass* primaryForShips;  // 0x53B8
    FactoryClass* primaryForBuildings;  // 0x53BC
    FactoryClass* primaryUnused1;  // 0x53C0
    FactoryClass* primaryUnused2;  // 0x53C4
    FactoryClass* primaryUnused3;  // 0x53C8
    FactoryClass* primaryForDefenses;  // 0x53CC
    unsigned char HouseClass_field_53D0;  // 0x53D0
    void* ourFlagCoords;  // 0x53DC [X30:type_map]
    char killedUnitsOfHouses[80];  // 0x53E0
int totalKilledUnits;  // 0x5430 [X35-L7 kind=int]
    char killedBuildingsOfHouses[80];  // 0x5434
int totalKilledBuildings;  // 0x5484 [X35-L7 kind=int]
    unsigned int HouseClass_field_548C;  // 0x548C
    void* baseSpawnCell;  // 0x5490 [X30:type_map]
    void* baseCenter;  // 0x5494 [X30:type_map]
    unsigned int unknown5498;  // 0x5498
    unsigned int HouseClass_field_549C;  // 0x549C
    unsigned int HouseClass_field_54A0;  // 0x54A0
    unsigned int HouseClass_field_54A4;  // 0x54A4
    unsigned int HouseClass_field_54A8;  // 0x54A8
    unsigned int HouseClass_field_54AC;  // 0x54AC
    unsigned int HouseClass_field_54B0;  // 0x54B0
    unsigned int HouseClass_field_54B4;  // 0x54B4
    unsigned int HouseClass_field_54B8;  // 0x54B8
    unsigned int HouseClass_field_54BC;  // 0x54BC
    unsigned int HouseClass_field_54C0;  // 0x54C0
    unsigned int HouseClass_field_54C4;  // 0x54C4
    unsigned int HouseClass_field_54C8;  // 0x54C8
    unsigned int HouseClass_field_54CC;  // 0x54CC
    unsigned int HouseClass_field_54D0;  // 0x54D0
    unsigned int HouseClass_field_54D4;  // 0x54D4
    unsigned int HouseClass_field_54D8;  // 0x54D8
    unsigned int HouseClass_field_54DC;  // 0x54DC
    FactoryClass* HouseClass_field_54E0;  // 0x54E0 [X30:type_map]
    char radarVisibleTo[4];  // 0x54E4
    int siloMoney;  // 0x54E8 [X30:type_map]
    int preferredTargetType;  // 0x54EC [X30:type_map]
    void* preferredTargetCell;  // 0x54F0 [X30:type_map]
    void* preferredDefensiveCell;  // 0x54F4 [X30:type_map]
    void* preferredDefensiveCell2;  // 0x54F8 [X30:type_map]
    int preferredDefensiveCellStartTime;  // 0x54FC [X30:type_map]
    int ownedBuildingTypes;  // 0x5500 [X30:type_map]
    char ownedUnitTypes[8];  // 0x5508
    char ownedInfantryTypes[8];  // 0x5510
    char ownedAircraftTypes[8];  // 0x5518
    char ownedBuildingTypes1[8];  // 0x5520
    int ownedUnitTypes1;  // 0x5528 [X30:type_map]
    char ownedInfantryTypes1[8];  // 0x5530
    char ownedAircraftTypes1[8];  // 0x5538
    char ownedBuildingTypes2[8];  // 0x5540
    char ownedUnitTypes2[8];  // 0x5548
    char SuperWeaponsAvailable[8];  // 0x5550
    char ownedAircraftTypes2[8];  // 0x5558
    unsigned int SuperWeaponsAvailable_d;  // 0x5560
    unsigned int HouseClass_field_55F0;  // 0x55F0
    unsigned int HouseClass_field_55F4;  // 0x55F4
    char attackDelayA[4];  // 0x55F8
    char attackDelayB[4];  // 0x55FC
    int enemyHouseIndex;  // 0x5600 [X30:type_map]
    AngerStruct* angerNodes;  // 0x5604
    int angerNodesCapacity;  // 0x560C [X30:type_map]
    ScoutStruct* scoutNodes;  // 0x5610
    char scoutNodesCapacity[4];  // 0x5618
    char unkTimer3[12];  // 0x561C
    char unkTimer4[12];  // 0x5628
int producingBuildingTypeIndex;  // 0x5634 [X35-L7 kind=int]
    int producingUnitTypeIndex;  // 0x5638 [X30:type_map]
    int producingInfantryTypeIndex;  // 0x563C [X30:type_map]
int producingAircraftTypeIndex;  // 0x5640 [X35-L7 kind=int]
int ratioAiTriggerTeam;  // 0x5644 [X35-L7 kind=int]
int ratioTeamAircraft;  // 0x5648 [X35-L7 kind=int]
    int ratioTeamInfantry;  // 0x564C [X30:type_map]
    int ratioTeamBuildings;  // 0x5650 [X30:type_map]
int baseDefenseTeamCount;  // 0x5654 [X35-L7 kind=int]
    char dropshipData[132];  // 0x5658
    int RatioAITriggerTeam;  // 0x565C
    int RatioTeamAircraft;  // 0x5660
    int RatioTeamInfantry;  // 0x5664
    int RatioTeamUnits;  // 0x5668
    char currentDropshipIndex[4];  // 0x56DC
    unsigned char hasCloakingRanges;  // 0x56E0
    char color[3];  // 0x56E1
    char laserColor[3];  // 0x56E4
    unsigned char colorPadding;  // 0x56E7
    char base[80];  // 0x56E8
    bool recheckPower;  // 0x5738
    bool recheckRadar;  // 0x5739
    bool spySatActive;  // 0x573A
    bool isBeingDrained;  // 0x573B
    char edge[4];  // 0x573C
    char empTarget[4];  // 0x5740
    char nukeTarget[4];  // 0x5744
    unsigned int allies;  // 0x5748
    char damageDelayTimer[12];  // 0x574C
    int teamDelayTimer;  // 0x5758 [X30:type_map]
    TimerStruct * ptr_5764;  // 0x5764
    char HouseClass_field_timer_B[12];  // 0x5770
    void * ptr_5774;  // 0x5774
    char HouseClass_field_timer_D[12];  // 0x5788
    char HouseClass_field_timer_E[12];  // 0x5794
    unsigned int HouseClass_field_57DC;  // 0x57DC
    unsigned char threatPosed_estimates_padding;  // 0x57E0
    char plainName;  // 0x15FF0
    char uiNameString;  // 0x16005
    char uiName[42];  // 0x16026
int colorSchemeIndex;  // 0x16050 [X35-L7 kind=int]
    void* startingCell;  // 0x16054 [X30:type_map]
    unsigned int startingAllies;  // 0x16058
    unsigned int unknown16060;  // 0x1605C
    void** waypointPath;  // 0x16060
int waypointPathCount;  // 0x16064 [X35-L7 kind=int]
    int waypointPathCapacity;  // 0x16068 [X30:type_map]
    unsigned int HouseClass_field_1607C;  // 0x1606C
    unsigned int unknown16080;  // 0x16070
    unsigned int unknown16084;  // 0x16074
    double unused16088;  // 0x16078
    double unused16090;  // 0x16080
    unsigned int padding16098;  // 0x16088
    float predictionEnemyArmor;  // 0x1608C
    float predictionEnemyAir;  // 0x16090
    float predictionEnemyInfantry;  // 0x16094
int totalOwnedInfantryCost;  // 0x16098 [X35-L7 kind=int]
    char totalOwnedVehicleCost[4];  // 0x1609C
    char totalOwnedAircraftCost[4];  // 0x160A0
    unsigned int HouseClass_field_160B4;  // 0x160A4
// --- flat members (END) ---
    int ClearLowPowerTargets();
    static void * ClampToUsableCell(void *aP1, void *a2);
    static int SetCombatPower(void *aP1, int a2);
    static char GetColor(void *aP1);
    static int GetTransitionCount(void *aP1);
    int numWarFactories;  // 0x5380 (int32_t per canon)
    int angerNodesCount;  // 0x5608 (G57W14E1 til supply)
    int scoutNodesCount;  // 0x5614 (G57W14E1 til supply)
    unsigned int CheckWinCondition_ph;  // w18j3: filler renamed (no offset truth; canon HouseClass::CheckWinCondition is a method)
    static unsigned int CheckWinCondition(char p0);  // x4:signals@0x4fc9e0
    void* AccumulateScore_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon HouseClass::AccumulateScore is a method)
    AbstractClass * * AIDecision(ObjectClass * aP0, int * a1);
    AbstractClass * * AutoBuildScanAndSort(int a2, unsigned int * a3);
    AbstractClass * * FindStartPositions(void *a1);
    AbstractClass * * SaveLoad_Prefix(int a1, LPSTREAM pStm);
    BOOL GainedPoweredCenter(int a2);
    static CellStruct * * UpdateAITryFireSW(void *a1);
    VectorClass_flat * vt_00_(char a2);
    VectorCursor * vt_placeholder_07(char a2);
    char DroppedFlag(UnitClass * aP1, int a3);
    static char IonSensitivesShouldBeOffline();  // x4:empty@0x53a130
    char PickedUpFlag(ObjectClass * aP1, char a3);
    char ReshroudMap();
    char Set(void *a1, void *a2, void *a3);
    char UpdateAllSilos(int a2, int a3);
    double GiveTiberium_Storage(float aP1, int aP2);
    static int COMStub_Ret1_1(int a1);
    static int NetworkConvert(void *aP0);  // 0x749100 G42.33 b5 static-form sync
    static int  IncrementStat(int a2);  // 0x749020
    int COMStub_Ret1_2(int a1);
    int CanAlly(HouseClass * aP1);
    int CanDetect();
    int CreatePowerOutage(int a2);
    int CreateRadarOutage(int a2);
    int DestroyAllBuildings();
    int DestroyAllNonBuildingsNaval();
    int DestroyAllNonBuildingsNonNaval();
    int FailedToPlaceNode(int a1);
    int GetCameoTypeIndex(int a2, void *a2_1 = 0);
    int GetInfSelfHealStep();
    int GetRepairStepAmount();
    int GetStatus(int aP1, void *a2 = 0);
    int GetUnitSelfHealStep();
    int InitAlliances();
    int IsAlliedWith(void *a1 = 0, void *a2 = 0);  // G57w4: raw fn_4F.c other@[ebp+4]
    int IsCellOccupied(IUnknown * aP1, char a3);  // G57w10-S raw 0x004FBE40 IUnknown 占位清除
    int MakeAlly(int a2, char a3);
    int PrerequisitesForTechnoTypeAreListed(int a1, VectorClass_flat * aP1, TechnoTypeClass * aP2);
    static int QueryInterface(CCINIClass * aP0, const void * a1, unsigned int * a2);
    int QueryInterface_Dispatch(int a2 = 0, const IID * a3 = 0, void ** a4 = 0);
    int QueryInterface_Helper(const void * a2 = 0, unsigned int * a3 = 0);
    int RespawnStartingForces(TechnoClass * aP0, void ** a1, unsigned int * a2, int a4);
    static int RevealShroudForAllies(char a1, int a2);
    int SetPrimaryFactory(int a2);
    int UpdatePower(double a2);
    int sub_5092F0(int a2);
    int vt_04_(int * a2);
    int vt_placeholder_00();
    int vt_placeholder_01();
    int vt_placeholder_02();
    std::locale::facet * initAngerStruct(char a2);
    unsigned int * SDDTORAllAndTriggers();
    unsigned int * vt_placeholder_09();
    unsigned int * vt_placeholder_10();
    unsigned int vt_05_(int a2);
    void * CanTogglePower();
    void ** PsiWarn(InfantryClass * aP0, int a2, int arg0, void * a3);
    void AcquiredThreatNode();
    int Construct(int a2, void *a2_1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    static void LostPoweredCenter(int a2, void *a2_2);
    static int ResetObjectOrders(char a1, int a2);
    void vt_03_();
    static int CalcProductionSpeed(HouseClass * aP1);
     int FindByName(void *a1 = 0);
    static char FindType15(HouseClass * aP1);
    static unsigned int * FirstBuildableFromArray(HouseClass * aP1, int a2);
    static unsigned int * GetCurrentOption(HouseClass * aP1, unsigned int *a2);
    static int GetMaxBuildLevel(HouseClass * aP1);
    static unsigned int * GetStartCoords(HouseClass * aP1, unsigned int *a2);
    int IsAllied(int a1);  // was C2597 interim stub, := truth 0x0x4f9a10
    static int ProcessPowerDrain(HouseClass * aP1, int a2);
    static char ShouldDisableCameo(HouseClass * aP1, int a2);
    static int UpdateProduction(HouseClass * aP1, int a2, int a3, int a4);
    static int GetPowerRatio(HouseClass * aP1);
    bool FindType24(void *a1 = 0);  // 0x726fb0
    int HasType26Building(void *a1 = 0);  // 0x726f50
    int HasType25Building(void *a1 = 0);  // 0x726f80
    int  AddPower(int a2, void *a1 = 0);  // 0x4f9950
    int HasPower();  // 0x717880
    char AIBuildBase();  // 0x50a5c0
    void SetPrimaryTechBuilding();  // 0x50c210
    int UpdateAllTypes();  // 0x6e57f0
    int  DecrementUnitCount(unsigned char * a2);  // 0x4ff550
    int  CanBuild(int a2, char a3, char a4, void *a1 = 0);  // 0x4f7870
    int CalculateCostMultipliers();  // 0x50bf60
    int FindOwner(void *a1 = 0);  // 0x502d30
    int  SetMapSeed(int a2, void *a1 = 0);  // 0x50e000
    char  SetAlliance(void * a2, char a3);  // 0x4f9f90
    int  HandleAlliance(int a2, char a3);  // 0x4f9b70
    unsigned int * ClearStatArray();  // 0x748fd0
    int SaveToINI(char *a2);
    int sub_63CF10();  // 0x63CF10
    int sub_63CFC0();
    static int CheckDefeat(char p0);  // x4:signals@0x4fcbd0
    static int ProcessPower(ObjectClass *p_this);  // x4:ida@0x5f6250
    static int InitStatArray(void *aP1, unsigned int a2);
    static int initDropshipData(void *aP1);
    static char ClearPrimaryFactory();
    static char checkAutoProduction();
    unsigned int u32_54E4;  // 0x54E4 (offset-truth)

    unsigned char BaseClass_15C0[4];  /* BaseClass */  // X10 supply (member_lookup)
    unsigned char CounterClass_154F[4];  /* CounterClass */  // X10 supply (member_lookup)
    unsigned char CounterClass_1559[4];  /* CounterClass */  // X10 supply (member_lookup)
    unsigned char CounterClass_1563[4];  /* CounterClass */  // X10 supply (member_lookup)
    unsigned char CounterClass_156D[4];  /* CounterClass */  // X10 supply (member_lookup)
    unsigned char CounterClass_1577[4];  /* CounterClass */  // X10 supply (member_lookup)
    unsigned char CounterClass_2A80[4];  /* CounterClass */  // X10 supply (member_lookup)
    unsigned char CounterClass_2A94[4];  /* CounterClass */  // X10 supply (member_lookup)
    unsigned char CounterClass_2AA8[4];  /* CounterClass */  // X10 supply (member_lookup)
    unsigned char CounterClass_2ABC[4];  /* CounterClass */  // X10 supply (member_lookup)
    unsigned char CounterClass_2AD0[4];  /* CounterClass */  // X10 supply (member_lookup)
    unsigned char CounterClass_2AE4[4];  /* CounterClass */  // X10 supply (member_lookup)
    unsigned char Delegate_BF[4];  /* Delegate */  // X10 supply (member_lookup)
    unsigned char Delegate_C5[4];  /* Delegate */  // X10 supply (member_lookup)
    unsigned char HouseClass_10DA[4];  /* HouseClass */  // X10 supply (member_lookup)
    unsigned char HouseClass_12DC[4];  /* HouseClass */  // X10 supply (member_lookup)
    unsigned char HouseClass_159C[4];  /* HouseClass */  // X10 supply (member_lookup)
    unsigned char HouseClass_4CE[4];  /* HouseClass */  // X10 supply (member_lookup)
    unsigned char HouseClass_8D2[4];  /* HouseClass */  // X10 supply (member_lookup)
    unsigned char HouseClass_AD4[4];  /* HouseClass */  // X10 supply (member_lookup)
    unsigned char HouseClass_CA[4];  /* HouseClass */  // X10 supply (member_lookup)
    unsigned char HouseClass_CD6[4];  /* HouseClass */  // X10 supply (member_lookup)
    unsigned char HouseClass_ED8[4];  /* HouseClass */  // X10 supply (member_lookup)
    char playerControl;  // X10 supply (member_lookup)
    bool q019;  // X10 supply (member_lookup)
    unsigned int q01A;  // X10 supply (member_lookup)
    void * q032;  // X10 supply (member_lookup)
    unsigned int q03E;  // X10 supply (member_lookup)
    bool q059;  // X10 supply (member_lookup)
    unsigned int q05A;  // X10 supply (member_lookup)
    int q076;  // X10 supply (member_lookup)
    int q096;  // X10 supply (member_lookup)
    unsigned int q097;  // X10 supply (member_lookup)
    unsigned char q099;  // X10 supply (member_lookup)
    unsigned char q0A9;  // X10 supply (member_lookup)
    unsigned char q0B9;  // X10 supply (member_lookup)
    unsigned int q0BD;  // X10 supply (member_lookup)
    unsigned int q0C3;  // X10 supply (member_lookup)
    void* q14E0;  // X10 supply (member_lookup)
    unsigned char q14E4;  // X10 supply (member_lookup)
    unsigned int q14E5;  // X10 supply (member_lookup)
    unsigned int q14E6;  // X10 supply (member_lookup)
    unsigned int q14E7;  // X10 supply (member_lookup)
    unsigned char q14E8;  // X10 supply (member_lookup)
    unsigned int q14E9;  // X10 supply (member_lookup)
    unsigned int q14EA;  // X10 supply (member_lookup)
    unsigned int q14EB;  // X10 supply (member_lookup)
    IUnknown* q14EC;  // X10 supply (member_lookup)
    unsigned int q14ED;  // X10 supply (member_lookup)
    unsigned int q14EE;  // X10 supply (member_lookup)
    unsigned int q14EF;  // X10 supply (member_lookup)
    unsigned int q14F3;  // X10 supply (member_lookup)
    int q1524;  // X10 supply (member_lookup)
    unsigned int q1525;  // X10 supply (member_lookup)
    unsigned int q1526;  // X10 supply (member_lookup)
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass * q1536;  // X10 supply (member_lookup)
#else
    void* q1536;  // X10 supply (member_lookup)  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
    unsigned int q1545;  // X10 supply (member_lookup)
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass* q1580;  // X10 supply (member_lookup)
#else
    void* q1580;  // X10 supply (member_lookup)  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
    unsigned int q1586;  // X10 supply (member_lookup)
    unsigned int q1587;  // X10 supply (member_lookup)
    unsigned int q1590;  // X10 supply (member_lookup)
    unsigned char q1592;  // X10 supply (member_lookup)
    bool q1593;  // X10 supply (member_lookup)
    void* q1596;  // X10 supply (member_lookup)
    unsigned int q15E2;  // X10 supply (member_lookup)
    unsigned int q6D0;  // X10 supply (member_lookup)
    char u32_14F0;  // X10 supply (member_lookup)
    char u32_150D;  // X10 supply (member_lookup)
    char u32_1538;  // X10 supply (member_lookup)
    char u32_1583;  // X10 supply (member_lookup)
    unsigned int u32_1588;  // X10 supply (member_lookup)
    unsigned int u32_1589;  // X10 supply (member_lookup)
    unsigned int u32_158B;  // X10 supply (member_lookup)
    unsigned int u32_158C;  // X10 supply (member_lookup)
    unsigned int u32_159B;  // X10 supply (member_lookup)
    unsigned int u32_15BD;  // X10 supply (member_lookup)
    unsigned int u32_15E3;  // X10 supply (member_lookup)
    unsigned int u32_15E6;  // X10 supply (member_lookup)
    unsigned int u32_15E9;  // X10 supply (member_lookup)
    unsigned int u32_15EB;  // X10 supply (member_lookup)
    unsigned int u32_15EC;  // X10 supply (member_lookup)
    unsigned int u32_15EE;  // X10 supply (member_lookup)
    unsigned int u32_15EF;  // X10 supply (member_lookup)
    unsigned int u32_15F1;  // X10 supply (member_lookup)
    unsigned int u32_15F2;  // X10 supply (member_lookup)
    unsigned int u32_15F4;  // X10 supply (member_lookup)
    unsigned int u32_15F5;  // X10 supply (member_lookup)
    char u32_15F8;  // X10 supply (member_lookup)
    unsigned int u32_16008;  // X10 supply (member_lookup)
    char u32_25;  // X10 supply (member_lookup)
    char u32_26;  // X10 supply (member_lookup)
    unsigned int u32_2A8;  // X10 supply (member_lookup)
    unsigned int u32_2AC;  // X10 supply (member_lookup)
    unsigned int u32_2B4;  // X10 supply (member_lookup)
    unsigned int u32_2B8;  // X10 supply (member_lookup)
    unsigned char u32_2C054[4];  /* wchar_t */  // X10 supply (member_lookup)
    char u32_3;  // X10 supply (member_lookup)
    char u32_31;  // X10 supply (member_lookup)
    unsigned int u32_3D;  // X10 supply (member_lookup)
    unsigned int u32_49;  // X10 supply (member_lookup)
    char u32_4A;  // X10 supply (member_lookup)
    unsigned int u32_53D1;  // X10 supply (member_lookup)
    unsigned int u32_53D2;  // X10 supply (member_lookup)
    unsigned int u32_53D3;  // X10 supply (member_lookup)
    unsigned int u32_53D4;  // X10 supply (member_lookup)
    unsigned int u32_53D5;  // X10 supply (member_lookup)
    unsigned int u32_53D6;  // X10 supply (member_lookup)
    unsigned int u32_53D7;  // X10 supply (member_lookup)
    unsigned int u32_53D8;  // X10 supply (member_lookup)
    unsigned int u32_53E2;  // X10 supply (member_lookup)
    unsigned int u32_54F6;  // X10 supply (member_lookup)
    unsigned int u32_54FA;  // X10 supply (member_lookup)
    unsigned int u32_55;  // X10 supply (member_lookup)
    unsigned int u32_56;  // X10 supply (member_lookup)
    unsigned int u32_56F8;  // X10 supply (member_lookup)
    unsigned int u32_56FA;  // X10 supply (member_lookup)
    unsigned int u32_56FC;  // X10 supply (member_lookup)
    unsigned int u32_56FD;  // X10 supply (member_lookup)
    unsigned int u32_56FE;  // X10 supply (member_lookup)
    unsigned int u32_57;  // X10 supply (member_lookup)
    unsigned int u32_5778;  // X10 supply (member_lookup)
    unsigned int u32_5779;  // X10 supply (member_lookup)
    unsigned int u32_577A;  // X10 supply (member_lookup)
    unsigned int u32_577B;  // X10 supply (member_lookup)
    unsigned int u32_5780;  // X10 supply (member_lookup)
    unsigned int u32_5782;  // X10 supply (member_lookup)
    unsigned int u32_5784;  // X10 supply (member_lookup)
    unsigned int u32_5786;  // X10 supply (member_lookup)
    unsigned int u32_581F;  // X10 supply (member_lookup)
    int u32_5B;  // X10 supply (member_lookup)
    char u32_9A;  // X10 supply (member_lookup)
    unsigned int u32_9E;  // X10 supply (member_lookup)
    unsigned int u32_9F;  // X10 supply (member_lookup)
    char u32_A;  // X10 supply (member_lookup)
    unsigned int u32_A2;  // X10 supply (member_lookup)
    char u32_A6;  // X10 supply (member_lookup)
    unsigned int u32_AB;  // X10 supply (member_lookup)
    unsigned int u32_AE;  // X10 supply (member_lookup)
    char u32_B1;  // X10 supply (member_lookup)
    char u32_B2;  // X10 supply (member_lookup)
    char u32_B3;  // X10 supply (member_lookup)
    char u32_E;  // X10 supply (member_lookup)
    char u8_14DE;  // X10 supply (member_lookup)
    char u8_14DF;  // X10 supply (member_lookup)
    char u8_14E1;  // X10 supply (member_lookup)
    char u8_14E2;  // X10 supply (member_lookup)
    char u8_14E3;  // X10 supply (member_lookup)
    char u8_14F1;  // X10 supply (member_lookup)
    char u8_14F2;  // X10 supply (member_lookup)
    char u8_14F7;  // X10 supply (member_lookup)
    char u8_14F9;  // X10 supply (member_lookup)
    char u8_150E;  // X10 supply (member_lookup)
    char u8_1522;  // X10 supply (member_lookup)
    char u8_1523;  // X10 supply (member_lookup)
    char u8_1537;  // X10 supply (member_lookup)
    char u8_1539;  // X10 supply (member_lookup)
    char u8_153A;  // X10 supply (member_lookup)
    char u8_153B;  // X10 supply (member_lookup)
    char u8_153F;  // X10 supply (member_lookup)
    char u8_157C;  // X10 supply (member_lookup)
    char u8_157D;  // X10 supply (member_lookup)
    char u8_157E;  // X10 supply (member_lookup)
    char u8_157F;  // X10 supply (member_lookup)
    char u8_1581;  // X10 supply (member_lookup)
    char u8_1582;  // X10 supply (member_lookup)
    char u8_1585;  // X10 supply (member_lookup)
    char u8_158D;  // X10 supply (member_lookup)
    char u8_158F;  // X10 supply (member_lookup)
    char u8_1594;  // X10 supply (member_lookup)
    char u8_1595;  // X10 supply (member_lookup)
    char u8_1597;  // X10 supply (member_lookup)
    char u8_1598;  // X10 supply (member_lookup)
    char u8_1599;  // X10 supply (member_lookup)
    char u8_159A;  // X10 supply (member_lookup)
    char u8_15DF;  // X10 supply (member_lookup)
    char u8_15E5;  // X10 supply (member_lookup)
    char u8_15E8;  // X10 supply (member_lookup)
    char u8_15F7;  // X10 supply (member_lookup)
    char u8_15F9;  // X10 supply (member_lookup)
    unsigned char u8_5789;  // X10 supply (member_lookup)
    char u8_57FD;  // X10 supply (member_lookup)
    char u8_5815;  // X10 supply (member_lookup)
    char u8_5818;  // X10 supply (member_lookup)
    char u8_5819;  // X10 supply (member_lookup)
    char u8_581A;  // X10 supply (member_lookup)
    char u8_581B;  // X10 supply (member_lookup)
    char u8_581D;  // X10 supply (member_lookup)
    char u8_581E;  // X10 supply (member_lookup)
    char u8_7A;  // X10 supply (member_lookup)
    char u8_95;  // X10 supply (member_lookup)
    char u8_9B;  // X10 supply (member_lookup)
    uint8_t u8_9D;  // X10 supply (member_lookup)
    char u8_A3;  // X10 supply (member_lookup)
    char u8_B5;  // X10 supply (member_lookup)
    char u8_B6;  // X10 supply (member_lookup)
    char u8_B7;  // X10 supply (member_lookup)
    char u8_BA;  // X10 supply (member_lookup)
    char u8_BB;  // X10 supply (member_lookup)
    char u8_BE;  // X10 supply (member_lookup)

    unsigned char Float4_19D[4];  /* HouseClass */  // X10 supply (member_lookup)
    unsigned char __pad_16C;  // X10 supply (csp_canon_members)
    unsigned int u32_16009;  // X10 supply (member_lookup)
    unsigned int u32_16071;  // X10 supply (member_lookup)
    unsigned int u32_261;  // X10 supply (member_lookup)
    unsigned int u32_54F2;  // X10 supply (member_lookup)
    unsigned int u32_5611;  // X10 supply (member_lookup)
    unsigned int u32_5629;  // X10 supply (member_lookup)
    unsigned int u32_56F9;  // X10 supply (member_lookup)
    unsigned int u32_56FB;  // X10 supply (member_lookup)
    unsigned int u32_A5;  // X10 supply (member_lookup)
    unsigned char u8_578A;  // X10 supply (member_lookup)
    void* __pad_13C;  // 0x13C [X30:type_map]
    unsigned char __pad_1D8;  // 0x1D8 [X30:canon]
    int __pad_1E0;  // 0x1E0 [X30:type_map]
    int __pad_280;  // 0x280 [X30:type_map]
    unsigned char __pad_2C1;  // 0x2C1 [X30:canon]
    unsigned char __pad_5488;  // 0x5488 [X30:canon]
    int __pad_5564;  // 0x5564 [X30:type_map]
    unsigned char __pad_5768;  // 0x5768 [X30:canon]
    unsigned char __pad_577C;  // 0x577C [X30:canon]
    int __pad_57A0;  // 0x57A0 [X30:type_map]
    unsigned char __pad_16025;  // 0x16025 [X30:canon]
    int q54E4[1];  // 0x54E4 [X30:member_lookup]
    char u8_1F;  // 0x1F [X30:member_lookup]
    unsigned int vfptr;  // [X30:default]
};
#endif  // GAMEMD_G2_HouseClass_DEF

} // namespace gamemd
