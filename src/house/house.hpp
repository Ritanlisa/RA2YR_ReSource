#pragma once

#include "object/abstract.hpp"
#include "house/base.hpp"
#include "house/score.hpp"
#include "core/vector.hpp"

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
    uint8_t          DropshipStruct_field_C;
    uint8_t          m_align_D[3];
    int32_t          count;
    TechnoTypeClass* buildingTypes[5];
    int32_t          totalCost;
};

struct CounterClass
{
    int32_t* items;
    int32_t  count;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* Construct();  // 0x49F9B0
    int Decrement(int a1);  // 0x49FA70
    int ddtor();  // 0x49FB40
    int Load(int a1);  // 0x49FBE0
    void* QueryInterface(int a1);  // 0x49FCE0
    // --- gap2 auto-generated stub declarations (END) ---
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

    // unmatched: no callgraph reference and no git history record
    AbstractType __stdcall whatAmI() const override { return AbstractType::House; }

    // --- TODO: IHouse / IPublicHouse / IConnectionPointContainer interfaces from YRpp ---

    bool IsAlliedWith(int idx_house) const;  // 0x4F9A50
    bool IsAlliedWith(const HouseClass* house) const;  // 0x4F9A50
    bool IsAlliedWith(const ObjectClass* object) const;  // 0x4F9A50
    bool IsAlliedWith(const AbstractClass* abstract) const;  // 0x4F9A50

    void MakeAlly(int house_idx, bool announce);  // 0x4F9B50
    void MakeAlly(HouseClass* who, bool announce);  // 0x4F9B50
    // unmatched: no callgraph reference and no git history record
    void MakeEnemy(HouseClass* who, bool announce);
    // unmatched: no callgraph reference and no git history record
    void AllyAIHouses();

    void SDDTORAllAndTriggers();  // 0x4FB920
    // unmatched: no callgraph reference and no git history record
    void AcceptDefeat();
    void DestroyAll();
    void DestroyAllBuildings();  // 0x4FC790
    void DestroyAllNonBuildingsNonNaval();  // 0x4FC820
    void DestroyAllNonBuildingsNaval();  // 0x4FC8D0

    void RespawnStartingBuildings();  // 0x50D320
    void RespawnStartingForces();  // 0x50D440

    // unmatched: no callgraph reference and no git history record
    uint8_t Win(bool save_something);
    uint8_t Lose(bool save_something);

    bool CanAlly(HouseClass* other) const;  // 0x501540
    // unmatched: no callgraph reference and no git history record
    bool CanOverpower(TechnoClass* target) const;

    void LostPoweredCenter(TechnoTypeClass* type);  // 0x50E0E0
    void GainedPoweredCenter(TechnoTypeClass* type);  // 0x50E1B0

    // design: inline accessor, inlined at all call sites
    bool DoInfantrySelfHeal() const { return infantrySelfHeal > 0; }
    int GetInfSelfHealStep() const;  // 0x50D9E0
    // design: inline accessor, inlined at all call sites
    bool DoUnitsSelfHeal() const { return unitsSelfHeal > 0; }
    int GetUnitSelfHealStep() const;  // 0x50D9F0

    void UpdatePower(); // 0x508C30
    void CreatePowerOutage(int duration);  // 0x50BC90
    // wrapper: delegates to HouseClass::CreatePowerOutage at 0x50BC90
    double GetPowerPercentage() const;

    // design: inline accessor, inlined at all call sites
    bool HasFullPower() const { return powerOutput >= powerDrain || !powerDrain; }
    // design: inline accessor, inlined at all call sites
    bool HasLowPower() const { return powerOutput < powerDrain && powerDrain; }

    void CreateRadarOutage(int duration);  // 0x50BCD0
    void ReshroudMap();  // 0x50BD10
    // unmatched: no callgraph reference and no git history record
    void Cheer();

    // unmatched: no callgraph reference and no git history record
    void BuildingUnderAttack(BuildingClass* building);
    // unmatched: no callgraph reference and no git history record
    void TakeMoney(int amount);
    void GiveMoney(int amount);

    // unmatched: no callgraph reference and no git history record
    bool CanTransactMoney(int amount) const { return amount > 0 || AvailableMoney() >= -amount; }
    // unmatched: no callgraph reference and no git history record
    void TransactMoney(int amount)
    {
        if (amount > 0) GiveMoney(amount);
        else TakeMoney(-amount);
    }

    // unmatched: no callgraph reference and no git history record
    int AvailableMoney() const;

    void GiveTiberium(float amount, int type);
    void UpdateAllSilos(int prev_storage, int prev_total_storage);  // 0x4F9970
    // unmatched: no callgraph reference and no git history record
    double getStoragePercentage();

    void AcquiredThreatNode();  // 0x509130

    // unmatched: no callgraph reference and no git history record
    static bool IndexIsMP(int idx);

    // wrapper: delegates to HouseClass::AcquiredThreatNode at 0x509130
    void UpdateFactoriesQueues(AbstractType factory_of, bool is_naval, int build_cat) const;

    // unmatched: no callgraph reference and no git history record
    bool FireLightningStorm(SuperClass* super);
    // unmatched: no callgraph reference and no git history record
    bool FireParadrop(SuperClass* super);
    // unmatched: no callgraph reference and no git history record
    bool FirePsyDom(SuperClass* super);
    // unmatched: no callgraph reference and no git history record
    bool FireGenMutator(SuperClass* super);

    // design: no binary equivalent found in IDA
    int  AIBaseConstructionupdateLogic();
    void AITryFireSW();
    bool FireSW(int idx, const CellStruct& coords);

    // unmatched: no callgraph reference and no git history record
    CellStruct* PickTargetByType(CellStruct& out, TargetType type) const;
    // unmatched: no callgraph reference and no git history record
    CellStruct PickTargetByType(TargetType type) const
    {
        CellStruct out;
        PickTargetByType(out, type);
        return out;
    }

    // design: no binary equivalent found in IDA
    CellStruct* PickIonCannonTarget(CellStruct& out) const;
    CellStruct PickIonCannonTarget() const
    {
        CellStruct out;
        PickIonCannonTarget(out);
        return out;
    }

    // unmatched: no callgraph reference and no git history record
    bool IsIonCannonEligibleTarget(const TechnoClass* techno) const;

    // design: no binary equivalent found in IDA
    void UpdateFlagCoords(class UnitClass* new_carrier, uint32_t unk);
    void DroppedFlag(CellStruct* where, class UnitClass* who);  // 0x4FBF60
    char PickedUpFlag(class UnitClass* who, uint32_t unk);  // 0x4FC060

    // unmatched: no callgraph reference and no git history record
    FactoryClass* GetPrimaryFactory(AbstractType abs_id, bool naval, int build_cat) const;
    void SetPrimaryFactory(FactoryClass* factory, AbstractType abs_id, bool naval, int build_cat);  // 0x740DF0

    const CellStruct& GetBaseCenter() const
    {
        if (baseCenter != CellStruct{}) return baseCenter;
        return baseSpawnCell;
    }

    // design: no binary equivalent found in IDA
    unsigned int GetAIDifficultyIndex() const;

    // unmatched: no callgraph reference and no git history record
    bool IsNeutral() const;
    // design: no binary equivalent found in IDA
    bool IsPlayer() const;
    bool IsObserver() const;
    // wrapper: delegates to Player::IsObserver at 0x5E9440
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
    uint32_t                    HouseClass_field_1E4;
    int32_t                     sideIndex;
    bool                        currentPlayer;
    bool                        playerControl;
    bool                        production;
    bool                        autocreateAllowed;
    uint8_t                     HouseClass_field_1F0[2];
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
    uint8_t                     HouseClass_field_1FD[15];
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
    bool                        HouseClass_field_bool_24A;
    bool                        HouseClass_field_bool_24B;
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
    TimerStruct                 HouseClass_field_timer_28C;
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
    uint32_t                    HouseClass_field_2DC;
    uint32_t                    HouseClass_field_2E0;
    uint32_t                    HouseClass_field_2E4;
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
    uint8_t                     HouseClass_field_53D0[12];
    class UnitClass*           ourFlagCarrier;
    CellStruct                  ourFlagCoords;
    int32_t                     killedUnitsOfHouses[20];
    int32_t                     totalKilledUnits;
    int32_t                     killedBuildingsOfHouses[20];
    int32_t                     totalKilledBuildings;
    uint32_t                    HouseClass_field_548C;
    CellStruct                  baseSpawnCell;
    CellStruct                  baseCenter;
    uint32_t                    unknown5498;
    uint32_t                    HouseClass_field_549C;
    uint32_t                    HouseClass_field_54A0;
    uint32_t                    HouseClass_field_54A4;
    uint32_t                    HouseClass_field_54A8;
    uint32_t                    HouseClass_field_54AC;
    uint32_t                    HouseClass_field_54B0;
    uint32_t                    HouseClass_field_54B4;
    uint32_t                    HouseClass_field_54B8;
    uint32_t                    HouseClass_field_54BC;
    uint32_t                    HouseClass_field_54C0;
    uint32_t                    HouseClass_field_54C4;
    uint32_t                    HouseClass_field_54C8;
    uint32_t                    HouseClass_field_54CC;
    uint32_t                    HouseClass_field_54D0;
    uint32_t                    HouseClass_field_54D4;
    uint32_t                    HouseClass_field_54D8;
    uint32_t                    HouseClass_field_54DC;
    uint32_t                    HouseClass_field_54E0;
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
    DynamicVectorClass<SuperClass*> SuperWeaponsAvailable;
    uint32_t                    HouseClass_field_55F0;
    uint32_t                    HouseClass_field_55F4;
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
    TimerStruct                 HouseClass_field_timer_A;
    TimerStruct                 HouseClass_field_timer_B;
    TimerStruct                 HouseClass_field_timer_C;
    TimerStruct                 HouseClass_field_timer_D;
    TimerStruct                 HouseClass_field_timer_E;
    uint32_t                    HouseClass_field_57DC;
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
    uint32_t                    HouseClass_field_1607C;
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
    uint32_t                    HouseClass_field_160B4;

    // TODO: complete remaining members from YRpp (very large class ~969 lines)

protected:
    // design: compiler-generated special member, no callgraph/git history reference
    HouseClass() = default;
    // unmatched: no callgraph reference and no git history record
    HouseClass(HouseTypeClass* pType) noexcept;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int SaveTriggerNodeData(void* a1, void* a2);  // 0x42ED60
    int createStartingUnits(int a1);  // 0x431410
    int Render(int a1, int a2, int a3, int a4, int a5);  // 0x431700
    bool ProcessData();  // 0x431800
    int Add();  // 0x4575B0
    int Process();  // 0x458750
    int AssignCivilianToLowPowerTargets(int a1);  // 0x472330
    int SumPowerDrain();  // 0x473460
    int WriteBuildingTypeNameToINI(void* a1, void* a2, int a3);  // 0x474B20
    int ReadHouseNamesToBitmask(void* a1, void* a2, int a3);  // 0x475260
    int WriteHouseListToINI(void* a1, void* a2, int a3);  // 0x4752E0
    int ReadIntFromINI(void* a1, void* a2, int a3);  // 0x475980
    int updateBuildingProduction(void* a1, void* a2, int a3);  // 0x4759D0
    int MarkCellBuildable(int a1);  // 0x483410
    int checkAutoProduction();  // 0x483460
    bool HasType();  // 0x4870F0
    int FindHouseIndexByName();  // 0x48DB80
    void* initDropshipData();  // 0x4B69B0
    int RegisterForSwizzleTracking();  // 0x4B6BB0
    int UpdateTeamProductionSpeed();  // 0x4CA6E0
    void COMStub_3();  // 0x4E8290
    int COMStub_5(int a1);  // 0x4E82C0
    int COMStub_6(int a1);  // 0x4E82E0
    int COMStub_1(int a1);  // 0x4E9200
    int COMStub_2(int a1, void* a2);  // 0x4E9380
    int COMStub_4(void* a1);  // 0x4E9430
    void* COMStub_0(int a1);  // 0x4EF530
    void processTargetSelection();  // 0x4F21A0
    void* vt_placeholder_03(int a1);  // 0x4F2810
    void* vt_placeholder_04(int a1);  // 0x4F2830
    void vt_placeholder_05();  // 0x4F2850
    int vt_placeholder_06(int a1);  // 0x4F2880
    int processWaypointPlanning(int a1, void* a2);  // 0x4F2A60
    int vt_placeholder_08(void* a1);  // 0x4F2B10
    void* vt_placeholder_11(int a1);  // 0x4F2BB0
    int Constructor(int a1);  // 0x4F5190
    int Construct(int a1);  // 0x4F54A0
    int SetCombatPower(int a1);  // 0x4F6EC0
    int Destruct();  // 0x4F7140
    int CanBuild(int a1, int a2, int a3);  // 0x4F7870
    int GetFactoryProducing(int a1);  // 0x4F83C0
    void Update_TogglePower();  // 0x4F8440
    int Update();  // 0x4F9370
    int NotifyUnderAttack(void* a1);  // 0x4F93E0
    int ProcessPowerDrain(int a1);  // 0x4F9790
    int AddPower(int a1);  // 0x4F9950
    bool IsAllied(int a1);  // 0x4F9A10
    int HandleAlliance(int a1, int a2);  // 0x4F9B70
    int SetAlliance(int a1, int a2);  // 0x4F9F90
    int SetThreat_Bounds(int a1, int a2);  // 0x4FA2E0
    int StartFactoryProduction(void* a1, int a2, int a3);  // 0x4FA910
    int CancelProduction(void* a1, int a2, int a3, int a4);  // 0x4FAA10
    int CompleteProduction(void* a1, int a2, int a3, int a4);  // 0x4FB0E0
    int ProcessPromotionSound(void* a1);  // 0x4FB6B0
    int DefeatPlayer();  // 0x4FC0B0
    int ClearLowPowerTargets();  // 0x4FC6D0
    int CheckWinCondition(int a1);  // 0x4FC9E0
    int CheckDefeat(int a1);  // 0x4FCBD0
    double GetPowerRatio();  // 0x4FCE30
    int FindBuildingOfType(int a1, int a2);  // 0x4FD060
    int ManageProduction(int a1);  // 0x4FDD10
    int AutoBuild();  // 0x4FE3E0
    int AIUnitProduction();  // 0x4FEA60
    int AIInfantryProduction();  // 0x4FEEE0
    int AIAircraftProduction();  // 0x4FF210
    int DecrementUnitCount(void* a1);  // 0x4FF550
    int GetBuildLimit(int a1, int a2, int a3);  // 0x500510
    int GetFactoryCount(int a1, int a2);  // 0x500910
    int LoadTypeList();  // 0x5009B0
    int ReadFromINI(void* a1);  // 0x500B40
    int SaveToINI(void* a1);  // 0x501210
    int NotifyPowerStateChange(int a1);  // 0x5018C0
    void* GenerateAttackCoords(void* a1, int a2);  // 0x501AC0
    void* RegisterGain(int a1, int a2);  // 0x5025F0
    int RegisterGain_0(void* a1, int a2);  // 0x502A80
    int FindOwner();  // 0x502D30
    int UpdatePowerTimers(void* a1);  // 0x502D60
    int EnsurePlanningPathExists(int a1);  // 0x504740
    void* FirstBuildableFromArray(int a1);  // 0x5051E0
    void GenerateAIBuildListEnsureSanity();  // 0x5054B0
    void* ScanBuildLocation(void* a1, int a2, void* a3, int a4);  // 0x5060B0
    void* FindBestProductionBuilding(void* a1, int a2);  // 0x506B90
    int AutoBuildScanAndSort(int a1, void* a2);  // 0x506EF0
    int CollectInfantryBuildCandidates(int a1, int a2);  // 0x507D70
    int CollectAircraftBuildCandidates(int a1, int a2);  // 0x507F60
    int ComputePowerDistribution();  // 0x508150
    void FindAutoBuildLocation();  // 0x5082C0
    int ToggleGapGeneratorReveal();  // 0x508F60
    int UpdateProduction(int a1, int a2, int a3);  // 0x509140
    int UpdateFogVisibility();  // 0x509400
    int UpdateBuildState(int a1);  // 0x509700
    void Find(int a1);  // 0x509B20
    void FireStoredSW(int a1);  // 0x509C10
    int Fire_ParaDrop(int a1);  // 0x509CD0
    int Fire_LightningStorm(int a1);  // 0x509E00
    int Fire_GenMutator(int a1);  // 0x509F60
    int Fire_PsyDom(int a1);  // 0x50A150
    int FireSuperWeaponAtBestTarget(int a1);  // 0x50A350
    int RecordCratePlacement(void* a1);  // 0x50A490
    int AIBuildBase();  // 0x50A5C0
    int ShouldDisableCameo(int a1);  // 0x50B370
    int GetColor();  // 0x50B840
    int CalculateCostMultipliers();  // 0x50BF60
    double GetBuildingDamageMultiplier(void* a1);  // 0x50C0A0
    int FindByName();  // 0x50C170
    void SetPrimaryTechBuilding();  // 0x50C210
    int FindBuildLocation(int a1);  // 0x50C340
    int NotifyImpactWater();  // 0x50C8C0
    void* FindSWBuilding(void* a1);  // 0x50CBF0
    void* FindSWTarget(void* a1, int a2);  // 0x50D170
    int GetTransitionCount();  // 0x50DA80
    void* GetCurrentOption(void* a1);  // 0x50DEF0
    void* GetStartCoords(void* a1);  // 0x50DF30
    int SetMapSeed(int a1);  // 0x50E000
    void ReactivateTechnos(int a1);  // 0x50E280
    int processRadar(int a1, int a2, int a3);  // 0x50E430
    int AddCoordTrackingEntry(void* a1);  // 0x50FF50
    void* updatePowerState(int a1);  // 0x510460
    int processAIEvents(int a1);  // 0x510820
    int GetUpgradeValue();  // 0x542310
    void* ClampToUsableCell(void* a1, void* a2);  // 0x586E50
    int ProcessPower();  // 0x5F6250
    int updateAlliedStatus();  // 0x656DE0
    void SetRadarVisibility(int a1);  // 0x656DF0
    void* InitTypeVectors(int a1);  // 0x664D20
    int InitSubsystems();  // 0x6A5030
    int UpdateAllProductionTabs();  // 0x6A7D20
    void* ClearProductionQueue();  // 0x6A81B0
    int RouteFactoryRemoval(int a1, int a2, void* a3);  // 0x6ABAD0
    int RemoveFromProductionQueue(void* a1);  // 0x6ABB60
    void* AccumulateFloat4(void* a1, int a2);  // 0x6C9740
    void* ComputeResourceDelta(void* a1, int a2);  // 0x6C97E0
    void* updateFactoryQueue();  // 0x6D0EC0
    int InitDefeatState();  // 0x6D1610
    void* SetOwnerName(void* a1, int a2);  // 0x6D4DB0
    int UpdateTechBuildings(int a1, int a2, int a3, int a4);  // 0x6E0EF0
    int UpdateAllTypes();  // 0x6E57F0
    int GetMaxBuildLevel();  // 0x6E8780
    int EvaluateTarget();  // 0x6EB870
    void* FindBestBuildingToRepair();  // 0x6EC3D0
    int CheckDefeated(int a1, int a2);  // 0x6ED770
    int UpdateProductionQueue(int a1);  // 0x6EF4D0
    int CalcProductionSpeed();  // 0x6F47A0
    bool HasPower();  // 0x717880
    int HasType26Building();  // 0x726F50
    int HasType25Building();  // 0x726F80
    bool FindType24();  // 0x726FB0
    int FindType15();  // 0x726FE0
    int FindType2728(int a1);  // 0x727010
    int ClearPrimaryFactory();  // 0x740E20
    void* ClearStatArray();  // 0x748FD0
    int IncrementStat(int a1);  // 0x749020
    int InitStatArray(int a1);  // 0x749060
    int NetworkConvert();  // 0x749100
    void AccumulateScore(int a1, int a2);  // 0x74FF50
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int GetRepairStepAmount();  // 0x459840 -- HouseClass::GetRepairStepAmount
    double GiveTiberium_Storage(int a1, int a2);  // 0x4f9610 -- HouseClass::GiveTiberium_Storage
    int IsCellOccupied(int a1, int a2);  // 0x4fbe40 -- HouseClass::IsCellOccupied
    void* CanTogglePower();  // 0x508df0 -- HouseClass::CanTogglePower
    int UpdateAITryFireSW();  // 0x5098f0 -- HouseClass::UpdateAITryFireSW
    int GetCameoTypeIndex(int a1);  // 0x5471b0 -- HouseClass::GetCameoTypeIndex
    void AnnounceUpgrade(int a1);  // 0x47d2b0 -- House::AnnounceUpgrade
    int UpdateHouseAI();  // 0x4fd500 -- House::UpdateHouseAI
    int IsHumanPlayer();  // 0x50b6f0 -- House::IsHumanPlayer
    int IsCurrentPlayer();  // 0x50b730 -- House::IsCurrentPlayer
    int ChooseHouseEnemy(int a1);  // 0x50db00 -- House::ChooseHouseEnemy
    int LookupObject(int a1);  // 0x544be0 -- House::LookupObject
    bool LoadMapFileData(int a1, int a2);  // 0x544c20 -- House::LoadMapFileData
    int PowerBeginUpdate(int a1);  // 0x70c270 -- House::PowerBeginUpdate
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int QueryInterface_Helper(int a1, int a2, int a3);  // 0x429210
    int QueryInterface_Dispatch(int a1, int a2, int a3, int a4);  // 0x429270
    int QueryInterface(int a1, int a2, int a3);  // 0x4f6830
    int FailedToPlaceNode();  // 0x42f380
    void* PsiWarn(int a1, int a2, int a3, int a4);  // 0x43b5e0
    void ResetObjectOrders(int a1, int a2);  // 0x4adee0
    int RevealShroudForAllies(int a1, int a2);  // 0x4adff0
    int vt_placeholder_00(int a1);  // 0x4e8240
    int vt_placeholder_01(int a1);  // 0x4e8250
    int CanDetect();  // 0x501640
    int SaveLoad_Prefix();  // 0x503040
    int PrerequisitesForTechnoTypeAreListed(int a1, int a2, int a3);  // 0x505360
    int COMStub_Ret1_1(int a1);  // 0x50e340
    int COMStub_Ret1_2(int a1);  // 0x50e350
    int AIDecision(int a1, int a2);  // 0x5d70f0
    int InitAlliances();  // 0x5d74a0
    void FindStartPositions();  // 0x5ee9d0
    // === FUNCS-MOVE (END) ===
};

} // namespace gamemd

