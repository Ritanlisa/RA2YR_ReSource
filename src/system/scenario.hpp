#pragma once

#include <cstdint>

#include "object/abstract.hpp"

namespace gamemd {
    // X27: member-decl type supply (log-driven hygiene)
    class CampaignScore;

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







class TechnoTypeClass;

enum class TheaterType : int;

struct Variable
{
    char    name[40];
    char    unitValue;
};

struct ScenarioFlags
{
    bool bit00 : 1;
    bool bit01 : 1;
    bool bit02 : 1;
    bool bit03 : 1;
    bool ctfMode : 1;
    bool inert : 1;
    bool storedTiberium_grows : 1;
    bool storedTiberium_spreads : 1;
    bool mcvDeploy : 1;
    bool initialVeteran : 1;
    bool fixedAlliance : 1;
    bool harvesterImmune : 1;
    bool fogOfWar : 1;
    bool bit13 : 1;
    bool storedTiberium_explosive : 1;
    bool destroyableBridges : 1;
    bool meteorites : 1;
    bool ionStorms : 1;
    bool visceroids : 1;
    bool bit19 : 1;
    bool bit20 : 1;
    bool bit21 : 1;
    bool bit22 : 1;
    bool bit23 : 1;
    bool bit24 : 1;
    bool bit25 : 1;
    bool bit26 : 1;
    bool bit27 : 1;
    bool bit28 : 1;
    bool bit29 : 1;
    bool bit30 : 1;
    bool bit31 : 1;
};

struct Randomizer
{
    bool    unknown00;
    int32_t next1;
    int32_t next2;
    uint32_t table[250];

    // unmatched: no callgraph reference and no git history record
    uint32_t Random();
    // unmatched: no callgraph reference and no git history record
    int32_t RandomRanged(int n_min, int n_max);
    double RandomDouble();
};

class ScenarioClass
{
public:
    static ScenarioClass* Instance;
    static int MissionStubReturnZero2(void *aP0);  // 0x5D6310 G42.35 C8 static-form sync
    static int createStartingForces(void *aP0);    // 0x5D6340 G42.35 C8 static-form sync

    // design: no binary equivalent found in IDA
    bool IsDefinedWaypoint(int idx);
    // design: no binary equivalent found in IDA
    CellStruct* GetWaypointCoords(CellStruct* dest, int idx);
    CellStruct GetWaypointCoords(int idx);

    // design: static function, no direct binary match in IDA
    static void UpdateCellLighting();
    static int UpdateLighting(); // 0x53C280
    // unmatched: no callgraph reference and no git history record
    static void RecalcLighting(int r, int g, int b, uint32_t unk);

    ScenarioFlags       specialFlags;
    char                nextScenario[260];
    char                altNextScenario[260];
    int32_t             homeCell;
    int32_t             altHomeCell;
    int32_t             uniqueId;
    Randomizer          random;
    uint32_t            difficulty1;
    uint32_t            difficulty2;
    TimerStruct         elapsedTimer;
    TimerStruct         pauseTimer;
    uint32_t            ScenarioClass_field_62C;
    uint16_t            unknown630;
    CellStruct          waypoints[702];

    int32_t             startX;
    int32_t             startY;
    int32_t             width;
    int32_t             height;
    int32_t             numberStartingPoints;
    Point2D             startingPoints[8];
    int32_t             houseIndices[16];
    CellStruct          houseHomeCells[8];
    bool                teamsPresent;
    int32_t             numCoopHumanStartSpots;
    TimerStruct         missionTimer;
    const wchar_t*      missionTimer_text_csf;
    char                missionTimer_text[32];
    TimerStruct         shroudRegrowTimer;
    TimerStruct         fogTimer;
    TimerStruct         iceTimer;
    TimerStruct         ScenarioClass_field_timer_123c;
    TimerStruct         ambientTimer;
    int32_t             techLevel;
    int32_t             theater;
    char                fileName[260];
    wchar_t             name[45];
    char                uiName[32];
    wchar_t             uiNameLoaded[45];

    const char*         intro;
    const char*         brief;
    const char*         win;
    const char*         lose;
    const char*         action;
    const char*         postScore;
    const char*         preMapSelect;

    wchar_t             briefing[1024];
    char                briefingCsf[32];
    int32_t             themeIndex;
    int32_t             humanPlayerHouseTypeIndex;
    double              carryOverMoney;
    int32_t             carryOverCap;
    int32_t             percent;

    Variable            globalVariables[50];
    Variable            localVariables[100];

    CellStruct          view1;
    CellStruct          view2;
    CellStruct          view3;
    CellStruct          view4;
    uint32_t            ScenarioClass_field_34A0;
    bool                freeRadar;
    bool                trainCrate;
    bool                storedTiberium_growth_enabled;
    bool                veinGrowthEnabled;
    bool                iceGrowthEnabled;
    bool                bridgeDestroyed;
    bool                variablesChanged;
    bool                ambientChanged;
    bool                endOfGame;
    bool                timerInherit;
    bool                skipScore;
    bool                oneTimeOnly;
    bool                skipMapSelect;
    bool                truckCrate;
    bool                fillSilos;
    bool                storedTiberium_death_to_visceroid;
    bool                ignoreGlobalAiTriggers;
    bool                ScenarioClass_field_bool_34B5;
    bool                ScenarioClass_field_bool_34B6;
    bool                ScenarioClass_field_bool_34B7;
    int32_t             playerSideIndex;
    bool                multiplayerOnly;
    bool                isRandom;
    bool                pickedUpAnyCrate;
    TimerStruct         ScenarioClass_field_timer_34C0;
    int32_t             campaignIndex;
    int32_t             startingDropships;
    TechnoTypeClass**   allowableUnits;
    int32_t             allowableUnitsCount;
    int32_t*            allowableUnitMaximums;
    int32_t             allowableMaximumsCount;
    int32_t*            dropshipUnitCounts;
    int32_t             dropshipCountsCount;

    // lighting
    int32_t             ambientOriginal;
    int32_t             ambientCurrent;
    int32_t             ambientTarget;
    int32_t             red;
    int32_t             green;
    int32_t             blue;
    int32_t             ground;
    int32_t             level;

    int32_t             ionAmbient;
    int32_t             ionRed;
    int32_t             ionGreen;
    int32_t             ionBlue;
    int32_t             ionGround;
    int32_t             ionLevel;

    int32_t             nukeAmbient;
    int32_t             nukeRed;
    int32_t             nukeGreen;
    int32_t             nukeBlue;
    int32_t             nukeGround;
    int32_t             nukeLevel;
    int32_t             nukeAmbientChangeRate;

    int32_t             dominatorAmbient;
    int32_t             dominatorRed;
    int32_t             dominatorGreen;
    int32_t             dominatorBlue;
    int32_t             dominatorGround;
    int32_t             dominatorLevel;
    int32_t             dominatorAmbientChangeRate;

    uint32_t            unknown3598;
    int32_t             initTime;
    int16_t             stage;
    bool                ScenarioClass_field_35A2;
    uint8_t             ScenarioClass_field_35A3;
    int32_t             parTimeEasy;
    int32_t             parTimeMedium;
    int32_t             parTimeDifficult;
    char                underParTitle[31];
    char                underParMessage[31];
    char                overParTitle[31];
    char                overParMessage[31];
    char                lsLoadMessage[31];
    char                lsBrief[31];
    int32_t             ls640BriefLocX;
    int32_t             ls640BriefLocY;
    int32_t             ls800BriefLocX;
    int32_t             ls800BriefLocY;
    char                ls640BkgdName[64];
    char                ls800BkgdName[64];
    char                ls800BkgdPal[64];

protected:
    ScenarioClass() noexcept;
    ~ScenarioClass() noexcept;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int ReadAndParseString(void* a1, void* a2, int a3);  // 0x475870
    int loadMapData(void* a1, void* a2, int a3);  // 0x475950
    int SaveIntListToINI(void* a1, void* a2, int a3);  // 0x475F30
    int SaveTypeNameListToINI(void* a1, void* a2, int a3);  // 0x4766F0
    int FindTerrainTypeIndex();  // 0x48DBE0
    void LoadMapData(void* a1);  // 0x4ACE70
    int GetScenarioData(void* a1, int a2);  // 0x4ADA30
    int ProcessGame(void* a1);  // 0x4ADBA0
    void* SetEvent(int a1, int a2, int a3, int a4, int a5, int a6);  // 0x4C6780
    int UpdateScriptActions();  // 0x54E4D0
    void* ProcessAmbientEffects(int a1, int a2);  // 0x55BB40
    int CalcMinShroudLevel();  // 0x588990
    int Load(int a1);  // 0x5AE100
    unsigned int * initAI(char a1);  // 0x5C0FE0
    void* executeTriggerActions(int a1);  // 0x5C5E40
    int AdvanceSHPAnimationFrame(void* a1, void* a2);  // 0x5CBDA0
    void DrawConstructionFrame(int a1, void* a2);  // 0x5CC110
    void DrawPlacementPreview(int a1, void* a2);  // 0x5CC550
    void DrawSHPFrameToSurface(int a1);  // 0x5CC6C0
    bool updateTiberiumGrowth();  // 0x5CC740
    void* processCrates(int a1);  // 0x5CEC20
    int AssignStartingPoints(int a1);  // 0x5D6C70
    int deallocateCells(int a1);  // 0x5D80E0
    void resetScenarioData();  // 0x5D8110
    int validateMap(int a1);  // 0x5D8140
    int loadTheater(int a1);  // 0x5D8160
    int setupPlayers(void* a1);  // 0x5D8520
    int assignHouses(int a1);  // 0x5D8550
    int initLocalVariables(void* a1);  // 0x5D8670
    int setGameSpeed(int a1);  // 0x5D86B0
    int distributeStartingUnits(void* a1);  // 0x5D87E0
    int SaveGameOptions();  // 0x5FAD10
    void DestroyAndClearVector();  // 0x62E650
    void* GetActionCoordsCopy(void* a1);  // 0x633B90
    int RenderAction(int a1);  // 0x635350
    int ShowMissionBriefing();  // 0x65F520
    void* LookupMethod();  // 0x683000
    int ReadINIEntry(int a1);  // 0x683560
    void* InitTimer();  // 0x683610
    void* SetFileName(void* a1);  // 0x686700
    int SetupAlliances();  // 0x686890
    int SaveLoad_Prefix(void* a1);  // 0x689310
    void SaveLoad_Prefix_0(int a1);  // 0x689470
    int SetGlobalToByID(int a1, int a2);  // 0x689670
    int SetCountryFlag(void* a1, int a2);  // 0x6896C0
    int GetGlobalStateByID(int a1, void* a2);  // 0x689760
    int ReadGlobalVariables(void* a1);  // 0x689880
    int SetLocalToByID(int a1, int a2);  // 0x689910
    int GetLocalStateByID(int a1, void* a2);  // 0x689A00
    int ReadLocalVariables(void* a1);  // 0x689B20
    int ReadWaypoint(void* a1);  // 0x689C60
    int SaveToINI(void* a1, int a2);  // 0x68AD70
    unsigned int * Get_Waypoint_Location(unsigned int * a1, int a2);  // 0x68BCC0
    void* GetCellFromArray(int a1);  // 0x68BCE0
    void* ClearAllWaypoints();  // 0x68BD60
    bool Is_Waypoint_Valid(int a1);  // 0x68BD80
    int ReadWaypoints(int a1);  // 0x68BDC0
    int Write_Waypoints(void* a1);  // 0x68BE90
    int Set_Default_Waypoint(int a1);  // 0x68BF30
    int Set_Waypoint(int a1, int a2);  // 0x68BF50
    int LoadNetworkConfig();  // 0x6980C0
    void SaveMultiplayerSettings();  // 0x699450
    int CheckExists(int a1);  // 0x69AC30
    void FreeConfig();  // 0x69DE70
    int RevealMapForHouse(void* a1);  // 0x6B8B30
    int Create(int a1, int a2, int a3, int a4);  // 0x6E0110
    int PrepareTextDisplay(int a1, int a2, int a3, int a4);  // 0x6E1530
    int UpdateCounters(int a1, int a2, int a3, int a4);  // 0x6E1BD0
    int Set(int a1, int a2, int a3, int a4);  // 0x6E26D0
    int checkMissionObjectives(int a1);  // 0x6E5560
    char * processEndgame(unsigned int a1);  // 0x720940  G42.34: sig sync to cache truth (char* __thiscall(this, uint))
    int LoadWaypoints();  // 0x7283C0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int ReadTeams();  // 0x44f820 -- Scenario::ReadTeams
    int FindBuildingTypeByName(int a1, int a2, int a3);  // 0x4758f0 -- Scenario::FindBuildingTypeByName
    int CopyLocalScenarioData();  // 0x4c6180 -- Scenario::CopyLocalScenarioData
    int ProcessSidebarUnits();  // 0x50d610 -- Scenario::ProcessSidebarUnits
    int ComputeDisplayPosition();  // 0x552b10 -- Scenario::ComputeDisplayPosition
    void* ComputeDialogPos(int a1);  // 0x552be0 -- Scenario::ComputeDialogPos
    void Update();  // 0x55afb0 -- Scenario::Update
    int LoadOrReloadOptions(int a1);  // 0x597a10 -- Scenario::LoadOrReloadOptions
    void* ResetDisplayArrays();  // 0x5c9700 -- Scenario::ResetDisplayArrays
    int SetDword32(int a1);  // 0x642b10 -- Scenario::SetDword32
    int SetDword30(int a1);  // 0x642df0 -- Scenario::SetDword30
    int LoadWithProgress();  // 0x684620 -- Scenario::LoadWithProgress
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    bool AnimateConstructionStage(int a1, int a2, int a3, int a4);  // 0x5cc330
    int AssignStartPositions(int a1);  // 0x5d6be0
    int CleanupTemporary();  // 0x683eb0
    int ClearFlag();  // 0x5d6790
    void* CopyStartPositions();  // 0x58bb30
    int LoadMap(int a1, int a2, int a3);  // 0x686b20
    int LoadScenarioAndStart(int a1, int a2, int a3);  // 0x683ab0
    void* ProcessIntroTimer();  // 0x684180
    int ReadMapINI(int a1, int a2, int a3);  // 0x689e90
    // === FUNCS-MOVE (END) ===
    unsigned char m_1[4];  // 0x0 (no offset truth)  G42.34 T11: loadTheater body 0x5D8160 (_VectorClass_PAVMultiplayerGameMode-dialect this) reads *(uint*)&this->m_1[3]

    unsigned int Action;  // X10 supply (csp_canon_members)
    unsigned int AltNextScenario;  // X10 supply (csp_canon_members)
    unsigned int Brief;  // X10 supply (csp_canon_members)
    void* Capacity;  // X10 supply (csp_canon_members)
    int32_t CarryOverCap;  // X10 supply (csp_canon_members)
    void* InitTime;  // X10 supply (csp_canon_members)
    void* IsAllocated;  // X10 supply (csp_canon_members)
    void* Items;  // X10 supply (csp_canon_members)
    unsigned int Lose;  // X10 supply (csp_canon_members)
    unsigned char ObjectClass_238C[4];  /* ObjectClass */  // X10 supply (member_lookup)
    unsigned char ObjectClass_70C4[4];  /* ObjectClass */  // X10 supply (member_lookup)
    int32_t Percent;  // X10 supply (csp_canon_members)
    unsigned int PostScore;  // X10 supply (csp_canon_members)
    unsigned int PreMapSelect;  // X10 supply (csp_canon_members)
    int32_t StartingDropships;  // X10 supply (csp_canon_members)
    unsigned char __pad_248A;  // X10 supply (csp_canon_members)
    unsigned char __pad_35A0;  // X10 supply (csp_canon_members)
    unsigned char __pad_628;  // X10 supply (csp_canon_members)
    char ** q018;  // X10 supply (member_lookup)
    unsigned int q020;  // X10 supply (member_lookup)
    unsigned int q024;  // X10 supply (member_lookup)
    unsigned int q028;  // X10 supply (member_lookup)
    unsigned int q030;  // X10 supply (member_lookup)
    unsigned int q034;  // X10 supply (member_lookup)
    unsigned int q038;  // X10 supply (member_lookup)
    unsigned int q058;  // X10 supply (member_lookup)
    unsigned int q0F4;  // X10 supply (member_lookup)
    unsigned int q0F8;  // X10 supply (member_lookup)
    unsigned int q108;  // X10 supply (member_lookup)
    unsigned int q115C;  // X10 supply (member_lookup)
    unsigned int q1160;  // X10 supply (member_lookup)
    unsigned int q1164;  // X10 supply (member_lookup)
    unsigned int q1169;  // X10 supply (member_lookup)
    unsigned int q116C;  // X10 supply (member_lookup)
    unsigned int q1170;  // X10 supply (member_lookup)
    CampaignScore* q30C;  // X10 supply (member_lookup)
    unsigned int q3568;  // X10 supply (member_lookup)
    unsigned int q356C;  // X10 supply (member_lookup)
    unsigned int q3570;  // X10 supply (member_lookup)
    unsigned int q3574;  // X10 supply (member_lookup)
    unsigned int q3578;  // X10 supply (member_lookup)
    float u32_1040;  // X10 supply (member_lookup)
    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_1C;  // X10 supply (member_lookup)
    unsigned int u32_24B2;  // X10 supply (member_lookup)
    unsigned int u32_2C;  // X10 supply (member_lookup)
    unsigned int u32_357C;  // X10 supply (member_lookup)
    unsigned int u32_3580;  // X10 supply (member_lookup)
    unsigned int u32_3584;  // X10 supply (member_lookup)
    unsigned int u32_3588;  // X10 supply (member_lookup)
    unsigned int u32_358C;  // X10 supply (member_lookup)
    unsigned int u32_3590;  // X10 supply (member_lookup)
    unsigned int u32_3594;  // X10 supply (member_lookup)
    unsigned int u32_3C;  // X10 supply (member_lookup)
    unsigned int u32_40;  // X10 supply (member_lookup)
    unsigned int u32_44;  // X10 supply (member_lookup)
    unsigned int u32_4D7C;  // X10 supply (member_lookup)
    unsigned int u32_54;  // X10 supply (member_lookup)
    unsigned int u32_614;  // X10 supply (member_lookup)
    int u32_620;  // X10 supply (member_lookup)
    unsigned int u32_7B60;  // X10 supply (member_lookup)
    unsigned int u32_7B64;  // X10 supply (member_lookup)
    unsigned int u32_7F00;  // X10 supply (member_lookup)
    unsigned int u32_7F04;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
    float u32_E38;  // X10 supply (member_lookup)
    float u32_F3C;  // X10 supply (member_lookup)
    char u8_1098A8;  // X10 supply (member_lookup)
    char u8_10D8B8;  // X10 supply (member_lookup)
    unsigned char u8_1145;  // X10 supply (member_lookup)
    unsigned char u8_1146;  // X10 supply (member_lookup)
    char u8_1658;  // X10 supply (member_lookup)
    unsigned char u8_30D;  // X10 supply (member_lookup)
    unsigned char u8_71C;  // X10 supply (member_lookup)
    unsigned char u8_71D;  // X10 supply (member_lookup)
    unsigned char u8_71E;  // X10 supply (member_lookup)
};

} // namespace gamemd

