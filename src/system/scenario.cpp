#include "system/scenario.hpp"

#include <cstring>

namespace gamemd
{

ScenarioClass* ScenarioClass::Instance = nullptr;

ScenarioClass::ScenarioClass() noexcept
    : homeCell(-1)
    , altHomeCell(-1)
    , uniqueId(0)
    , difficulty1(0)
    , difficulty2(0)
    , m_unknown_62C(0)
    , unknown630(0)
    , startX(0)
    , startY(0)
    , width(0)
    , height(0)
    , numberStartingPoints(0)
    , teamsPresent(false)
    , numCoopHumanStartSpots(0)
    , missionTimer_text_csf(nullptr)
    , techLevel(0)
    , theater(0)
    , intro(nullptr)
    , brief(nullptr)
    , win(nullptr)
    , lose(nullptr)
    , action(nullptr)
    , postScore(nullptr)
    , preMapSelect(nullptr)
    , themeIndex(-1)
    , humanPlayerHouseTypeIndex(-1)
    , carryOverMoney(0.0)
    , carryOverCap(0)
    , percent(0)
    , m_unknown_34A0(0)
    , freeRadar(false)
    , trainCrate(false)
    , storedTiberium_growth_enabled(false)
    , veinGrowthEnabled(false)
    , iceGrowthEnabled(false)
    , bridgeDestroyed(false)
    , variablesChanged(false)
    , ambientChanged(false)
    , endOfGame(false)
    , timerInherit(false)
    , skipScore(false)
    , oneTimeOnly(false)
    , skipMapSelect(false)
    , truckCrate(false)
    , fillSilos(false)
    , storedTiberium_death_to_visceroid(false)
    , ignoreGlobalAiTriggers(false)
    , m_unknown_bool_34B5(false)
    , m_unknown_bool_34B6(false)
    , m_unknown_bool_34B7(false)
    , playerSideIndex(-1)
    , multiplayerOnly(false)
    , isRandom(false)
    , pickedUpAnyCrate(false)
    , campaignIndex(-1)
    , startingDropships(0)
    , allowableUnits(nullptr)
    , allowableUnitsCount(0)
    , allowableUnitMaximums(nullptr)
    , allowableMaximumsCount(0)
    , dropshipUnitCounts(nullptr)
    , dropshipCountsCount(0)
    , ambientOriginal(0)
    , ambientCurrent(0)
    , ambientTarget(0)
    , red(0)
    , green(0)
    , blue(0)
    , ground(0)
    , level(0)
    , ionAmbient(0)
    , ionRed(0)
    , ionGreen(0)
    , ionBlue(0)
    , ionGround(0)
    , ionLevel(0)
    , nukeAmbient(0)
    , nukeRed(0)
    , nukeGreen(0)
    , nukeBlue(0)
    , nukeGround(0)
    , nukeLevel(0)
    , nukeAmbientChangeRate(0)
    , dominatorAmbient(0)
    , dominatorRed(0)
    , dominatorGreen(0)
    , dominatorBlue(0)
    , dominatorGround(0)
    , dominatorLevel(0)
    , dominatorAmbientChangeRate(0)
    , unknown3598(0)
    , initTime(0)
    , stage(0)
    , m_unknown_35A2(false)
    , m_unknown_35A3(0)
    , parTimeEasy(0)
    , parTimeMedium(0)
    , parTimeDifficult(0)
    , ls640BriefLocX(0)
    , ls640BriefLocY(0)
    , ls800BriefLocX(0)
    , ls800BriefLocY(0)
{
    // IDA 0x6832CF: SeedInitRNG(&random, 0) -- offset +536
    random.Random(); // placeholder: SeedInitRNG will replace

    // IDA 0x6832E5: elapsedTimer = Timer::GetTicks() -- offset +1556
    // IDA 0x6832EB: elapsedTimer.end = 0 -- offset +1564
    // IDA 0x6832F6: pauseTimer = Timer::GetTicks() -- offset +1568
    // IDA 0x6832FC: pauseTimer.end = 0 -- offset +1576

    // IDA 0x683307: offset +4592 = 0
    // IDA 0x68330D: offset +4584 = CurrentFrame
    // IDA 0x683313: offset +4600 = 0
    // IDA 0x68331F: offset +4640 = 0
    // IDA 0x683325: offset +4632 = CurrentFrame
    // IDA 0x683331: offset +4644 = CurrentFrame
    // IDA 0x683337: offset +4652 = 0
    // IDA 0x683342: offset +4664 = 0
    // IDA 0x683348: offset +4656 = CurrentFrame
    // IDA 0x683354: offset +4668 = CurrentFrame
    // IDA 0x68335A: offset +4676 = 0
    // IDA 0x683366: offset +4688 = 0
    // IDA 0x68336C: offset +4680 = CurrentFrame
    // IDA 0x683381: offset +13504 = CurrentFrame
    // IDA 0x683387: offset +13512 = 0

    // IDA 0x68338D: TypeList::TechnoTypeConstructor(this+13524, 0, 0)
    // IDA 0x683397: offset +13540 = 0
    // IDA 0x68339A: offset +13544 = 10
    // IDA 0x68339D: vtable assignment (TypeList<TechnoTypeClass*>)

    // IDA 0x6833AD: VectorClass::Construct(this+13552, 0, 0)
    // IDA 0x6833B2: offset +13572 = 10
    // IDA 0x6833B5: offset +13568 = 0
    // IDA 0x6833B8: vtable assignment (TypeList<int>)

    // IDA 0x6833C8: VectorClass::Construct(this+13580, 0, 0)
    // IDA 0x6833CF: offset +13600 = 10
    // IDA 0x6833D2: offset +13596 = 0
    // IDA 0x6833D5: vtable assignment (TypeList<int>)

    // IDA 0x6833DB: ScenarioClass::InitTimer(this)
    // IDA 0x6833E2: offset +13720 = 0
    // IDA 0x6833E8: offset +13501 = 0
    // IDA 0x6833EE: ScenarioClass::ResetIntroFlags(this)
    // IDA 0x6833F3: offset +4692 = 1
    // IDA 0x6833FD: offset +13516 = -1

    // IDA 0x683407: offset +4 = 0
    // IDA 0x68340A: offset +264 = 0

    // IDA 0x683421: memset loop -- 702 iterations, dword_B05458 -> offset +1586
    std::memset(waypoints, 0xFF, sizeof(waypoints)); // TODO: verify source constant

    // IDA 0x683435: wcscpy(this+4960, &g_TypeClass_DefaultString)
    std::memset(name, 0, sizeof(name));
    // IDA 0x683446: wcscpy(this+5082, &g_TypeClass_DefaultString)
    std::memset(uiNameLoaded, 0, sizeof(uiNameLoaded));
    // IDA 0x683475: strcpy(this+4700, &g_INI_DefaultBuffer)
    std::memset(fileName, 0, sizeof(fileName));
    // IDA 0x68349D: strcpy(this+7248, &g_INI_DefaultBuffer)
    std::memset(briefing, 0, sizeof(briefing));
    // IDA 0x6834BF: strcpy(this+5050, &g_INI_DefaultBuffer)
    std::memset(uiName, 0, sizeof(uiName));
    // IDA 0x6834CF: wcscpy(this+5200, &g_TypeClass_DefaultString)

    // IDA 0x6834E2-0x683502: HouseClass::UpdateAllTypes loop (50 iterations)
    for (int i = 0; i < 50; ++i) {
        globalVariables[i].name[0] = '\0'; // offset -40 from unitValue
        globalVariables[i].unitValue = '\0';
    }

    // IDA 0x68350F-0x68352F: TriggerActionQueue::ProcessAll loop (100 iterations)
    for (int i = 0; i < 100; ++i) {
        localVariables[i].name[0] = '\0'; // offset -40 from unitValue
        localVariables[i].unitValue = '\0';
    }

    // IDA 0x683534-0x683549: zero 4 dwords at +13454
    view1 = {};
    view2 = {};
    view3 = {};
    view4 = {};
}

bool ScenarioClass::IsDefinedWaypoint(int idx)
{
    if (idx < 0 || idx >= 702)
        return false;
    return waypoints[idx].X != -1 || waypoints[idx].Y != -1;
}

CellStruct* ScenarioClass::GetWaypointCoords(CellStruct* dest, int idx)
{
    if (dest && idx >= 0 && idx < 702)
    {
        *dest = waypoints[idx];
    }
    else if (dest)
    {
        *dest = {};
    }
    return dest;
}

void ScenarioClass::UpdateCellLighting()
{
    // TODO: recalculate cell lighting across map
}

void ScenarioClass::UpdateLighting()
{
    // TODO: update global lighting interpolation
}

void ScenarioClass::RecalcLighting(int r, int g, int b, uint32_t unk)
{
    // TODO: recalculate all lighting converts
    (void)r;
    (void)g;
    (void)b;
    (void)unk;
}

} // namespace gamemd
