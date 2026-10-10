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
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    void* vtable5;  // 0x24
    void* vtable6;  // 0x28
    void* vtable7;  // 0x2C
    char relatedTagsCount[4];  // 0x30
    unsigned int alignmentPadding;  // 0x33
    char relatedTagsCapacity[4];  // 0x34
    int arrayIndex;  // 0x36
    BuildingClass** conYards;  // 0x38
    char conYardsCount[4];  // 0x3C
    char conYardsCapacity[4];  // 0x40
    BuildingClass** buildings;  // 0x44
    char buildingsCount[4];  // 0x48
    char buildingsCapacity[4];  // 0x4C
    BuildingClass** unitRepairStations;  // 0x50
    char repairStationsCount[4];  // 0x54
    char repairStationsCapacity[4];  // 0x58
    BuildingClass** grinders;  // 0x5C
    char grindersCount[4];  // 0x60
    char grindersCapacity[4];  // 0x64
    BuildingClass** absorbers;  // 0x68
    char absorbersCount[4];  // 0x6C
    char absorbersCapacity[4];  // 0x70
    BuildingClass** bunkers;  // 0x74
    char bunkersCount[4];  // 0x78
    char bunkersCapacity[4];  // 0x7C
    BuildingClass** occupiables;  // 0x80
    char occupiablesCount[4];  // 0x84
    char occupiablesCapacity[4];  // 0x88
    BuildingClass** cloningVats;  // 0x8C
    char cloningVatsCount[4];  // 0x90
    char cloningVatsCapacity[4];  // 0x94
    BuildingClass** secretLabs;  // 0x98
    char secretLabsCount[4];  // 0x9C
    char secretLabsCapacity[4];  // 0xA0
    BuildingClass** psychicDetectionBuildings;  // 0xA4
    char psychicDetectionCount[4];  // 0xA8
    char psychicDetectionCapacity[4];  // 0xAC
    BuildingClass** productionFactory_plants;  // 0xB0
    char productionFactory_plants_count[4];  // 0xB4
    char productionFactory_plants_capacity[4];  // 0xB8
    char countResourceGatherers[4];  // 0xBC
    char countResourceDestinations[4];  // 0xC0
    char countWarfactories[4];  // 0xC4
    char infantrySelfHeal[4];  // 0xC8
    char unitsSelfHeal[4];  // 0xCC
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
    double buildTimeMultiplier;  // 0x110
    double repairDelay;  // 0x118
    double buildDelay;  // 0x120
    char iqLevel[4];  // 0x128
    char techLevel[4];  // 0x12C
    unsigned int altAllies;  // 0x130
    char startingCredits[4];  // 0x134
    char startingEdge[4];  // 0x138
    int techInfiltrationFlags;  // 0x164
    int productionInfiltrationFlags;  // 0x168
    unsigned int IQ;  // 0x1D0
    unsigned int TechLevel;  // 0x1D4
    unsigned int Credits;  // 0x1DC
    unsigned int HouseClass_field_1E4;  // 0x1E4
    char sideIndex[4];  // 0x1E8
    bool currentPlayer;  // 0x1EC
    bool PlayerControl;  // 0x1ED
    bool production;  // 0x1EE
    bool autocreateAllowed;  // 0x1EF
    unsigned char HouseClass_field_1F0;  // 0x1F0
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
    char iqLevel2[4];  // 0x24C
    char aiMode[4];  // 0x250
    SuperClass** supers;  // 0x254
    char supersCount[4];  // 0x258
    char supersCapacity[4];  // 0x25C
    char lastBuiltBuildingType[4];  // 0x260
    char lastBuiltInfantryType[4];  // 0x264
    char lastBuiltAircraftType[4];  // 0x268
    char lastBuiltVehicleType[4];  // 0x26C
    char allowWinBlocks[4];  // 0x270
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
    char airportDocks[4];  // 0x2D4
    char poweredUnitCenters[4];  // 0x2D8
    unsigned int HouseClass_field_2DC;  // 0x2DC
    unsigned int HouseClass_field_2E0;  // 0x2E0
    unsigned int HouseClass_field_2E4;  // 0x2E4
    char ownedUnits[4];  // 0x2E8
    char ownedNavy[4];  // 0x2EC
    char ownedBuildings[4];  // 0x2F0
    char ownedInfantry[4];  // 0x2F4
    char ownedAircraft[4];  // 0x2F8
    char ownedTiberium[16];  // 0x2FC
    char balance[4];  // 0x30C
    char totalStorage[4];  // 0x310
    char ownedWeed[16];  // 0x314
    unsigned int unknown324;  // 0x324
    char builtInfantryTypes[2056];  // 0x328
    VectorClass * ptr_390;  // 0x390
    VectorClass * ptr_458;  // 0x458
    VectorClass * ptr_474;  // 0x474
    VectorClass * ptr_734;  // 0x734
    VectorClass * ptr_938;  // 0x938
    VectorClass * ptr_970;  // 0x970
    char builtUnitTypes[2056];  // 0xB30
    VectorClass * ptr_1158;  // 0x1158
    VectorClass * ptr_1174;  // 0x1174
    VectorClass * ptr_1194;  // 0x1194
    VectorClass * ptr_1204;  // 0x1204
    VectorClass * ptr_1220;  // 0x1220
    VectorClass * ptr_1258;  // 0x1258
    VectorClass * ptr_1274;  // 0x1274
    VectorClass * ptr_1290;  // 0x1290
    char builtAircraftTypes[2056];  // 0x1338
    char builtBuildingTypes[2056];  // 0x1B40
    char killedInfantryTypes[2056];  // 0x2348
    char killedUnitTypes[2056];  // 0x2B50
    char killedAircraftTypes[2056];  // 0x3358
    char killedBuildingTypes[2056];  // 0x3B60
    char unknownScores[2056];  // 0x4368
    char collectedPowerups[2056];  // 0x4B70
    char numAirpads[4];  // 0x5378
    char numBarracks[4];  // 0x537C
    char numWarFactories[4];  // 0x5380
    char numConYards[4];  // 0x5384
    char numShipyards[4];  // 0x5388
    char numOrePurifiers[4];  // 0x538C
    float costInfantryMult;  // 0x5390
    float costUnitsMult;  // 0x5394
    float costAircraftMult;  // 0x5398
    float costBuildingsMult;  // 0x539C
    float costDefensesMult;  // 0x53A0
    char powerOutput[4];  // 0x53A4
    char powerDrain[4];  // 0x53A8
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
    char ourFlagCoords[4];  // 0x53DC
    char killedUnitsOfHouses[80];  // 0x53E0
    char totalKilledUnits[4];  // 0x5430
    char killedBuildingsOfHouses[80];  // 0x5434
    char totalKilledBuildings[4];  // 0x5484
    unsigned int HouseClass_field_548C;  // 0x548C
    char baseSpawnCell[4];  // 0x5490
    char baseCenter[4];  // 0x5494
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
    unsigned int HouseClass_field_54E0;  // 0x54E0
    char radarVisibleTo[4];  // 0x54E4
    char siloMoney[4];  // 0x54E8
    char preferredTargetType[4];  // 0x54EC
    char preferredTargetCell[4];  // 0x54F0
    char preferredDefensiveCell[4];  // 0x54F4
    char preferredDefensiveCell2[4];  // 0x54F8
    char preferredDefensiveCellStartTime[4];  // 0x54FC
    char ownedBuildingTypes[8];  // 0x5500
    char ownedUnitTypes[8];  // 0x5508
    char ownedInfantryTypes[8];  // 0x5510
    char ownedAircraftTypes[8];  // 0x5518
    char ownedBuildingTypes1[8];  // 0x5520
    char ownedUnitTypes1[8];  // 0x5528
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
    char enemyHouseIndex[4];  // 0x5600
    AngerStruct* angerNodes;  // 0x5604
    char angerNodesCount[4];  // 0x5608
    char angerNodesCapacity[4];  // 0x560C
    ScoutStruct* scoutNodes;  // 0x5610
    char scoutNodesCount[4];  // 0x5614
    char scoutNodesCapacity[4];  // 0x5618
    char unkTimer3[12];  // 0x561C
    char unkTimer4[12];  // 0x5628
    char producingBuildingTypeIndex[4];  // 0x5634
    char producingUnitTypeIndex[4];  // 0x5638
    char producingInfantryTypeIndex[4];  // 0x563C
    char producingAircraftTypeIndex[4];  // 0x5640
    char ratioAiTriggerTeam[4];  // 0x5644
    char ratioTeamAircraft[4];  // 0x5648
    char ratioTeamInfantry[4];  // 0x564C
    char ratioTeamBuildings[4];  // 0x5650
    char baseDefenseTeamCount[4];  // 0x5654
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
    char teamDelayTimer[12];  // 0x5758
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
    char colorSchemeIndex[4];  // 0x16050
    char startingCell[4];  // 0x16054
    unsigned int startingAllies;  // 0x16058
    unsigned int unknown16060;  // 0x1605C
    void** waypointPath;  // 0x16060
    char waypointPathCount[4];  // 0x16064
    char waypointPathCapacity[4];  // 0x16068
    unsigned int HouseClass_field_1607C;  // 0x1606C
    unsigned int unknown16080;  // 0x16070
    unsigned int unknown16084;  // 0x16074
    double unused16088;  // 0x16078
    double unused16090;  // 0x16080
    unsigned int padding16098;  // 0x16088
    float predictionEnemyArmor;  // 0x1608C
    float predictionEnemyAir;  // 0x16090
    float predictionEnemyInfantry;  // 0x16094
    char totalOwnedInfantryCost[4];  // 0x16098
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
    static unsigned int CheckWinCondition(...);
    void* AccumulateScore_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon HouseClass::AccumulateScore is a method)
    static unsigned int AccumulateScore(...);
    AbstractClass * * AIDecision(ObjectClass * aP0, int * a1);
    AbstractClass * * AutoBuildScanAndSort(int a2, unsigned int * a3);
    AbstractClass * * FindStartPositions(void *a1);
    AbstractClass * * SaveLoad_Prefix(int a1, LPSTREAM pStm);
    BOOL GainedPoweredCenter(int a2);
    CellStruct * * UpdateAITryFireSW(void *a1);
    VectorClass_flat * vt_00_(char a2);
    VectorCursor * vt_placeholder_07(char a2);
    char DroppedFlag(UnitClass * aP1, int a3);
    static char IonSensitivesShouldBeOffline(...);
    char PickedUpFlag(ObjectClass * aP1, char a3);
    char ReshroudMap();
    char Set(void *a1, void *a2, void *a3);
    char UpdateAllSilos(int a2, int a3);
    int GiveTiberium_Storage(float a2, int a3);
    int COMStub_Ret1_1(int a1);
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
    int GetCameoTypeIndex(int a2, void *a1 = 0);
    int GetInfSelfHealStep();
    int GetRepairStepAmount();
    static int GetStatus(HouseClass * aP1, int a2);
    int GetUnitSelfHealStep();
    int InitAlliances();
    int IsAlliedWith(void *a1 = 0, void *a2 = 0);  // G57w4: raw fn_4F.c other@[ebp+4]
    int IsCellOccupied(int a2, char a3);  // G57w10-S raw 0x004FBE40 IUnknown 占位清除
    int MakeAlly(int a2, char a3);
    int PrerequisitesForTechnoTypeAreListed(int a1, VectorClass_flat * aP1, TechnoTypeClass * aP2);
    static int QueryInterface(CCINIClass * aP0, const void * a1, unsigned int * a2);
    int QueryInterface_Dispatch();
    int QueryInterface_Helper();
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
    int Construct(int a2, void *a1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    void LostPoweredCenter(int a2, void *a2_2);
    int ResetObjectOrders(char a1, int a2);
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
    static int CheckDefeat(...);
    static int ProcessPower(...);
    static int InitStatArray(void *aP1, unsigned int a2);
    static int initDropshipData(void *aP1);
    static char ClearPrimaryFactory();
    static char checkAutoProduction();
    unsigned int u32_54E4;  // 0x54E4 (offset-truth)
    static double RespawnStartingBuildings(...);  // plateau: C2039/C3861 stub
    static double vfptr(...);  // plateau: C2039/C3861 stub
};
#endif  // GAMEMD_G2_HouseClass_DEF

} // namespace gamemd
