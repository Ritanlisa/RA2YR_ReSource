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
    unsigned int ptr_0;  // 0x0
    void* ptr_4;  // 0x4
    void* ptr_8;  // 0x8
    void* ptr_C;  // 0xC
    void* uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    void* referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    void* ptr_24;  // 0x24
    void* ptr_28;  // 0x28
    void* ptr_2C;  // 0x2C
    int relatedTagsCount;  // 0x30
    int relatedTagsCapacity;  // 0x34
    BuildingClass** conYards;  // 0x38
    int conYardsCount;  // 0x3C
    int conYardsCapacity;  // 0x40
    BuildingClass** buildings;  // 0x44
    int buildingsCount;  // 0x48
    BuildingClass* buildingsCapacity;  // 0x4C
    BuildingClass** unitRepairStations;  // 0x50
    int repairStationsCount;  // 0x54
    int repairStationsCapacity;  // 0x58
    BuildingClass** grinders;  // 0x5C
    int grindersCount;  // 0x60
    int grindersCapacity;  // 0x64
    BuildingClass** absorbers;  // 0x68
    int absorbersCount;  // 0x6C
    int absorbersCapacity;  // 0x70
    BuildingClass** bunkers;  // 0x74
    int bunkersCount;  // 0x78
    int bunkersCapacity;  // 0x7C
    BuildingClass** occupiables;  // 0x80
    int occupiablesCount;  // 0x84
    int occupiablesCapacity;  // 0x88
    BuildingClass** cloningVats;  // 0x8C
    int cloningVatsCount;  // 0x90
    int cloningVatsCapacity;  // 0x94
    BuildingClass** secretLabs;  // 0x98
    int secretLabsCount;  // 0x9C
    int secretLabsCapacity;  // 0xA0
    BuildingClass** psychicDetectionBuildings;  // 0xA4
    int psychicDetectionCount;  // 0xA8
    void* psychicDetectionCapacity;  // 0xAC
    BuildingClass** productionFactory_plants;  // 0xB0
    int productionFactory_plants_count;  // 0xB4
    int productionFactory_plants_capacity;  // 0xB8
    char countResourceGatherers[4];  // 0xBC
    char countResourceDestinations[4];  // 0xC0
    char countWarfactories[4];  // 0xC4
    void* infantrySelfHeal;  // 0xC8
    void* unitsSelfHeal;  // 0xCC
    StartingTechnoStruct** startingUnits;  // 0xD0
    char startingUnitsCount[4];  // 0xD4
    char startingUnitsCapacity[4];  // 0xD8
    char aiDifficulty[4];  // 0xDC
    double firepowerMultiplier;  // 0xE0
    double groundspeedMultiplier;  // 0xE8
    double airspeedMultiplier;  // 0xF0
    double armorMultiplier;  // 0xF8
    double rofMultiplier;  // 0x100
    double costMultiplier;  // 0x108
    int buildTimeMultiplier[2];  // 0x110
    double repairDelay;  // 0x118
    double buildDelay;  // 0x120
    int iqLevel;  // 0x128
    void* techLevel;  // 0x12C
    unsigned int altAllies;  // 0x130
    int startingCredits;  // 0x134
    int startingEdge;  // 0x138
    void* __pad_13C;  // 0x13C
    char __pad_140[24];  // 0x140
    int u32_158;  // 0x158
    unsigned int u32_15C;  // 0x15C
    unsigned int q160;  // 0x160
    int techInfiltrationFlags;  // 0x164
    int productionInfiltrationFlags;  // 0x168
    unsigned char __pad_16C;  // 0x16C
    char __pad_16D[23];  // 0x16D
    int u32_184;  // 0x184
    int u32_188;  // 0x188
    unsigned int u32_18C;  // 0x18C
    unsigned int q190;  // 0x190
    int u32_194;  // 0x194
    int u32_198;  // 0x198
    unsigned int u32_19C;  // 0x19C
    unsigned int q1A0;  // 0x1A0
    unsigned int u32_1A4;  // 0x1A4
    unsigned int u32_1A8;  // 0x1A8
    unsigned int u32_1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    unsigned int u32_1B4;  // 0x1B4
    unsigned int u32_1B8;  // 0x1B8
    unsigned int u32_1BC;  // 0x1BC
    unsigned int q1C0;  // 0x1C0
    unsigned int u32_1C4;  // 0x1C4
    unsigned int u32_1C8;  // 0x1C8
    unsigned int u32_1CC;  // 0x1CC
    AbstractClass* IQ;  // 0x1D0
    unsigned int TechLevel;  // 0x1D4
    unsigned char __pad_1D8;  // 0x1D8
    char __pad_1D9[3];  // 0x1D9
    unsigned int Credits;  // 0x1DC
    int __pad_1E0;  // 0x1E0
    unsigned int HouseClass_field_1E4;  // 0x1E4
    int sideIndex;  // 0x1E8
    bool currentPlayer;  // 0x1EC
    char playerControl;  // 0x1ED
    bool production;  // 0x1EE
    bool autocreateAllowed;  // 0x1EF
    char HouseClass_field_1F0[2];  // 0x1F0
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
    char HouseClass_field_1FD[11];  // 0x1FD
    unsigned int u32_208;  // 0x208
    char selectedPathIndex[4];  // 0x20C
    int planningPaths[12];  // 0x210
    char visionary[1];  // 0x240
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
    int iqLevel2;  // 0x24C
    int aiMode;  // 0x250
    SuperClass** supers;  // 0x254
    int supersCount;  // 0x258
    int supersCapacity;  // 0x25C
    int lastBuiltBuildingType;  // 0x260
    int lastBuiltInfantryType;  // 0x264
    int lastBuiltAircraftType;  // 0x268
    char lastBuiltVehicleType[4];  // 0x26C
    int allowWinBlocks;  // 0x270
    char repairTimer[4];  // 0x274
    unsigned int u32_278;  // 0x278
    unsigned int u32_27C;  // 0x27C
    int __pad_280;  // 0x280
    char __pad_284[4];  // 0x284
    int u32_288;  // 0x288
    char HouseClass_field_timer_28C[8];  // 0x28C
    unsigned int u32_294;  // 0x294
    char savourTimer[8];  // 0x298
    unsigned int q2A0;  // 0x2A0
    char powerBlackoutTimer[8];  // 0x2A4
    unsigned int u32_2AC;  // 0x2AC
    char radarBlackoutTimer[8];  // 0x2B0
    unsigned int u32_2B8;  // 0x2B8
    bool side2TechInfiltrated;  // 0x2BC
    bool side1TechInfiltrated;  // 0x2BD
    bool side0TechInfiltrated;  // 0x2BE
    bool barracksInfiltrated;  // 0x2BF
    bool warFactoryInfiltrated;  // 0x2C0
    unsigned char __pad_2C1;  // 0x2C1
    char __pad_2C2[2];  // 0x2C2
    unsigned int infantryAltOwner;  // 0x2C4
    unsigned int unitAltOwner;  // 0x2C8
    unsigned int aircraftAltOwner;  // 0x2CC
    unsigned int buildingAltOwner;  // 0x2D0
    int airportDocks;  // 0x2D4
    int poweredUnitCenters;  // 0x2D8
    unsigned int HouseClass_field_2DC;  // 0x2DC
    unsigned int HouseClass_field_2E0;  // 0x2E0
    unsigned int HouseClass_field_2E4;  // 0x2E4
    int ownedUnits;  // 0x2E8
    char ownedNavy[4];  // 0x2EC
    int ownedBuildings;  // 0x2F0
    int ownedInfantry;  // 0x2F4
    int ownedAircraft;  // 0x2F8
    char ownedTiberium[16];  // 0x2FC
    int balance;  // 0x30C
    int totalStorage;  // 0x310
    char ownedWeed[16];  // 0x314
    unsigned int unknown324;  // 0x324
    char builtInfantryTypes[2056];  // 0x328
    char builtUnitTypes[2056];  // 0xB30
    char builtAircraftTypes[2056];  // 0x1338
    char builtBuildingTypes[2056];  // 0x1B40
    char killedInfantryTypes[2056];  // 0x2348
    char killedUnitTypes[2056];  // 0x2B50
    char killedAircraftTypes[2056];  // 0x3358
    char killedBuildingTypes[2056];  // 0x3B60
    char unknownScores[2056];  // 0x4368
    char collectedPowerups[2056];  // 0x4B70
    int numAirpads;  // 0x5378
    int numBarracks;  // 0x537C
    int numWarFactories;  // 0x5380
    int numConYards;  // 0x5384
    int numShipyards;  // 0x5388
    int numOrePurifiers;  // 0x538C
    float costInfantryMult;  // 0x5390
    float costUnitsMult;  // 0x5394
    float costAircraftMult;  // 0x5398
    float costBuildingsMult;  // 0x539C
    float costDefensesMult;  // 0x53A0
    int powerOutput;  // 0x53A4
    int powerDrain;  // 0x53A8
    FactoryClass* primaryForAircraft;  // 0x53AC
    FactoryClass* primaryForInfantry;  // 0x53B0
    FactoryClass* primaryForVehicles;  // 0x53B4
    FactoryClass* primaryForShips;  // 0x53B8
    FactoryClass* primaryForBuildings;  // 0x53BC
    FactoryClass* primaryUnused1;  // 0x53C0
    FactoryClass* primaryUnused2;  // 0x53C4
    FactoryClass* primaryUnused3;  // 0x53C8
    FactoryClass* primaryForDefenses;  // 0x53CC
    int HouseClass_field_53D0[3];  // 0x53D0
    void* ourFlagCoords;  // 0x53DC
    char killedUnitsOfHouses[80];  // 0x53E0
    int totalKilledUnits;  // 0x5430
    char killedBuildingsOfHouses[80];  // 0x5434
    int totalKilledBuildings;  // 0x5484
    unsigned char __pad_5488;  // 0x5488
    char __pad_5489[3];  // 0x5489
    unsigned int HouseClass_field_548C;  // 0x548C
    void* baseSpawnCell;  // 0x5490
    void* baseCenter;  // 0x5494
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
    FactoryClass* HouseClass_field_54E0;  // 0x54E0
    char radarVisibleTo[4];  // 0x54E4
    int siloMoney;  // 0x54E8
    int preferredTargetType;  // 0x54EC
    void* preferredTargetCell;  // 0x54F0
    void* preferredDefensiveCell;  // 0x54F4
    void* preferredDefensiveCell2;  // 0x54F8
    int preferredDefensiveCellStartTime;  // 0x54FC
    int ownedBuildingTypes[2];  // 0x5500
    char ownedUnitTypes[8];  // 0x5508
    char ownedInfantryTypes[8];  // 0x5510
    char ownedAircraftTypes[8];  // 0x5518
    char ownedBuildingTypes1[8];  // 0x5520
    int ownedUnitTypes1[2];  // 0x5528
    char ownedInfantryTypes1[8];  // 0x5530
    char ownedAircraftTypes1[8];  // 0x5538
    char ownedBuildingTypes2[8];  // 0x5540
    char ownedUnitTypes2[8];  // 0x5548
    int ownedInfantryTypes2[2];  // 0x5550
    char ownedAircraftTypes2[8];  // 0x5558
    unsigned int SuperWeaponsAvailable_d;  // 0x5560
    int __pad_5564;  // 0x5564
    char __pad_5568[136];  // 0x5568
    unsigned int HouseClass_field_55F0;  // 0x55F0
    unsigned int HouseClass_field_55F4;  // 0x55F4
    char attackDelayA[4];  // 0x55F8
    char attackDelayB[4];  // 0x55FC
    int enemyHouseIndex;  // 0x5600
    AngerStruct* angerNodes;  // 0x5604
    int angerNodesCount;  // 0x5608
    int angerNodesCapacity;  // 0x560C
    ScoutStruct* scoutNodes;  // 0x5610
    int scoutNodesCount;  // 0x5614
    char scoutNodesCapacity[4];  // 0x5618
    char unkTimer3[12];  // 0x561C
    char unkTimer4[12];  // 0x5628
    int producingBuildingTypeIndex;  // 0x5634
    int producingUnitTypeIndex;  // 0x5638
    int producingInfantryTypeIndex;  // 0x563C
    int producingAircraftTypeIndex;  // 0x5640
    int ratioAiTriggerTeam;  // 0x5644
    int ratioTeamAircraft;  // 0x5648
    int ratioTeamInfantry;  // 0x564C
    int ratioTeamBuildings;  // 0x5650
    int baseDefenseTeamCount;  // 0x5654
    unsigned int dropshipData;  // 0x5658
    int RatioAITriggerTeam;  // 0x565C
    int RatioTeamAircraft;  // 0x5660
    int RatioTeamInfantry;  // 0x5664
    int RatioTeamUnits;  // 0x5668
    char pad_566C[112];  // 0x566C
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
    int teamDelayTimer[3];  // 0x5758
    char ptr_5764[12];  // 0x5764
    char HouseClass_field_timer_B[12];  // 0x5770
    char __pad_577C[12];  // 0x577C
    char HouseClass_field_timer_D[12];  // 0x5788
    char HouseClass_field_timer_E[12];  // 0x5794
    int __pad_57A0;  // 0x57A0
    char __pad_57A4[56];  // 0x57A4
    unsigned int HouseClass_field_57DC;  // 0x57DC
    char threatPosed_estimates_padding[67600];  // 0x57E0
    char plainName[21];  // 0x15FF0
    char uiNameString[32];  // 0x16005
    unsigned char __pad_16025;  // 0x16025
    char uiName[42];  // 0x16026
    int colorSchemeIndex;  // 0x16050
    void* startingCell;  // 0x16054
    unsigned int startingAllies;  // 0x16058
    unsigned int unknown16060;  // 0x1605C
    void** waypointPath;  // 0x16060
    int waypointPathCount;  // 0x16064
    int waypointPathCapacity;  // 0x16068
    unsigned int u32_1607C;  // 0x1606C
    unsigned int unknown16080;  // 0x16070
    unsigned int unknown16084;  // 0x16074
    double unused16088;  // 0x16078
    double unused16090;  // 0x16080
    unsigned int padding16098;  // 0x16088
    float predictionEnemyArmor;  // 0x1608C
    float predictionEnemyAir;  // 0x16090
    float predictionEnemyInfantry;  // 0x16094
    int totalOwnedInfantryCost;  // 0x16098
    char totalOwnedVehicleCost[4];  // 0x1609C
    char totalOwnedAircraftCost[4];  // 0x160A0
    unsigned int HouseClass_field_160B4;  // 0x160A4
// --- flat members (BEGIN) ---
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
// --- flat members (END) ---
    int ClearLowPowerTargets();
    static void * ClampToUsableCell(void *aP1, void *a2);
    static int SetCombatPower(void *aP1, int a2);
    static char GetColor(void *aP1);
    static int GetTransitionCount(void *aP1);
    static unsigned int CheckWinCondition(char p0);  // x4:signals@0x4fc9e0
    AbstractClass * * AIDecision(ObjectClass * aP0, int * a1);
    AbstractClass * * AutoBuildScanAndSort(int a2, unsigned int * a3);
    AbstractClass * * FindStartPositions(void *a1);
    AbstractClass * * SaveLoad_Prefix(int a1, LPSTREAM pStm);
    BOOL GainedPoweredCenter(int a2);
    static CellStruct * * UpdateAITryFireSW(void *a1);
    VectorClass_flat * g_var_4cd06d(char a2);
    VectorCursor * g_var_7395f7(char a2);
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
    int RespawnStartingForces(TechnoClass * aP0, void ** a1, unsigned int * a2, int a4);
    static int RevealShroudForAllies(char a1, int a2);
    int SetPrimaryFactory(int a2);
    int UpdatePower(double a2);
    int sub_5092F0(int a2);
    int g_var_9d376d(int * a2);
    std::locale::facet * initAngerStruct(char a2);
    unsigned int * SDDTORAllAndTriggers();
    unsigned int * g_var_1acf04();
    unsigned int * g_var_2f6b7e();
    unsigned int g_var_167f7c(int a2);
    void * CanTogglePower();
    void ** PsiWarn(InfantryClass * aP0, int a2, int arg0, void * a3);
    void AcquiredThreatNode();
    int Construct(int a2, void *a2_1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    static void LostPoweredCenter(int a2, void *a2_2);
    static int ResetObjectOrders(char a1, int a2);
    void g_var_78dc8d();
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
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
};
#endif  // GAMEMD_G2_HouseClass_DEF

} // namespace gamemd
