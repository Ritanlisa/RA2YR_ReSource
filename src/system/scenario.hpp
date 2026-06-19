#pragma once

#include <cstdint>

#include "object/abstract.hpp"

namespace gamemd {

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

    uint32_t Random(); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    int32_t RandomRanged(int n_min, int n_max); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    double RandomDouble();
};

class ScenarioClass
{
public:
    static ScenarioClass* Instance;

    bool IsDefinedWaypoint(int idx);
    CellStruct* GetWaypointCoords(CellStruct* dest, int idx);
    CellStruct GetWaypointCoords(int idx)
    {
        CellStruct dest;
        GetWaypointCoords(&dest, idx);
        return dest;
    }

    static void UpdateCellLighting();
    static void UpdateLighting(); // 0x53C280
    static void RecalcLighting(int r, int g, int b, uint32_t unk); // IDA: UNMATCHED — no_callgraph_match, no_git_history

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
};

} // namespace gamemd

