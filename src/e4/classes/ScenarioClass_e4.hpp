// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply
struct CampaignScore;  // fix_fwd_type_supply
struct TechnoTypeClass;  // fix_fwd_type_supply
struct TimerStruct;  // fix_fwd_type_supply

struct ScenarioClass {
// --- flat members (BEGIN) ---
    char nextScenario;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsAllocated;  // 0xD
    char altNextScenario;  // 0x104
    char homeCell[4];  // 0x208
    char altHomeCell[4];  // 0x20C
    char uniqueId[4];  // 0x210
    char random[1012];  // 0x214
    unsigned int difficulty1;  // 0x608
    unsigned int difficulty2;  // 0x60C
    char elapsedTimer[12];  // 0x610
    char pauseTimer[12];  // 0x61C
    unsigned int ScenarioClass_field_62C;  // 0x62C
    unsigned short unknown630;  // 0x630
    char waypoints[2808];  // 0x632
    char startX[4];  // 0x112C
    char startY[4];  // 0x1130
    char width[4];  // 0x1134
    char height[4];  // 0x1138
    char numberStartingPoints[4];  // 0x113C
    char startingPoints[64];  // 0x1140
    char houseIndices[64];  // 0x1180
    char houseHomeCells[32];  // 0x11C0
    bool teamsPresent;  // 0x11E0
    char numCoopHumanStartSpots[4];  // 0x11E4
    char missionTimer[12];  // 0x11E8
    unsigned int missionTimer_text_csf;  // 0x11F4
    char missionTimer_text;  // 0x11F8
    char shroudRegrowTimer[12];  // 0x1218
    char fogTimer[12];  // 0x1224
    char iceTimer[12];  // 0x1230
    char ScenarioClass_field_timer_123c[12];  // 0x123C
    char ambientTimer[12];  // 0x1248
    char techLevel[4];  // 0x1254
    char theater[4];  // 0x1258
    char fileName;  // 0x125C
    char name[90];  // 0x1360
    char uiName;  // 0x13BA
    char uiNameLoaded[90];  // 0x13DA
    unsigned int AltNextScenario;  // 0x1434
    unsigned int Brief;  // 0x1438
    unsigned int win;  // 0x143C
    unsigned int Lose;  // 0x1440
    unsigned int Action;  // 0x1444
    unsigned int PostScore;  // 0x1448
    unsigned int PreMapSelect;  // 0x144C
    char Name[2048];  // 0x1450
    char briefingCsf;  // 0x1C50
    char themeIndex[4];  // 0x1C70
    char humanPlayerHouseTypeIndex[4];  // 0x1C74
    double carryOverMoney;  // 0x1C78
    char CarryOverCap[4];  // 0x1C80
    char Percent[4];  // 0x1C84
    char globalVariables[2050];  // 0x1C88
    char localVariables[4100];  // 0x248C
    void * ptr_2888;  // 0x2888
    char view1[4];  // 0x3490
    char view2[4];  // 0x3494
    char view3[4];  // 0x3498
    char view4[4];  // 0x349C
    unsigned int ScenarioClass_field_34A0;  // 0x34A0
    bool freeRadar;  // 0x34A4
    bool trainCrate;  // 0x34A5
    bool storedTiberium_growth_enabled;  // 0x34A6
    bool veinGrowthEnabled;  // 0x34A7
    bool iceGrowthEnabled;  // 0x34A8
    bool bridgeDestroyed;  // 0x34A9
    bool variablesChanged;  // 0x34AA
    bool ambientChanged;  // 0x34AB
    bool endOfGame;  // 0x34AC
    bool timerInherit;  // 0x34AD
    bool skipScore;  // 0x34AE
    bool oneTimeOnly;  // 0x34AF
    bool skipMapSelect;  // 0x34B0
    bool truckCrate;  // 0x34B1
    bool fillSilos;  // 0x34B2
    bool storedTiberium_death_to_visceroid;  // 0x34B3
    bool ignoreGlobalAiTriggers;  // 0x34B4
    bool ScenarioClass_field_bool_34B5;  // 0x34B5
    bool ScenarioClass_field_bool_34B6;  // 0x34B6
    bool ScenarioClass_field_bool_34B7;  // 0x34B7
    char playerSideIndex[4];  // 0x34B8
    bool multiplayerOnly;  // 0x34BC
    bool isRandom;  // 0x34BD
    bool pickedUpAnyCrate;  // 0x34BE
    char ScenarioClass_field_timer_34C0[12];  // 0x34C0
    char campaignIndex[4];  // 0x34CC
    char StartingDropships[4];  // 0x34D0
    TechnoTypeClass** allowableUnits;  // 0x34D4
    char allowableUnitsCount[4];  // 0x34D8
    void* allowableUnitMaximums;  // 0x34DC
    char allowableMaximumsCount[4];  // 0x34E0
    void* dropshipUnitCounts;  // 0x34E4
    char dropshipCountsCount[4];  // 0x34E8
    char ambientOriginal[4];  // 0x34EC
    char ambientCurrent[4];  // 0x34F0
    char ambientTarget[4];  // 0x34F4
    char red[4];  // 0x34F8
    char green[4];  // 0x34FC
    char blue[4];  // 0x3500
    char ground[4];  // 0x3504
    char level[4];  // 0x3508
    char ionAmbient[4];  // 0x350C
    char ionRed[4];  // 0x3510
    char ionGreen[4];  // 0x3514
    char ionBlue[4];  // 0x3518
    char ionGround[4];  // 0x351C
    char ionLevel[4];  // 0x3520
    char nukeAmbient[4];  // 0x3524
    char nukeRed[4];  // 0x3528
    char nukeGreen[4];  // 0x352C
    char nukeBlue[4];  // 0x3530
    char nukeGround[4];  // 0x3534
    char nukeLevel[4];  // 0x3538
    char nukeAmbientChangeRate[4];  // 0x353C
    char dominatorAmbient[4];  // 0x3540
    char dominatorRed[4];  // 0x3544
    char dominatorGreen[4];  // 0x3548
    char dominatorBlue[4];  // 0x354C
    char dominatorGround[4];  // 0x3550
    char dominatorLevel[4];  // 0x3554
    char dominatorAmbientChangeRate[4];  // 0x3558
    unsigned int unknown3598;  // 0x355C
    char initTime[4];  // 0x3560
    char stage[2];  // 0x3564
    void* InitTime;  // 0x359C
    bool ScenarioClass_field_35A2;  // 0x35A2
    unsigned char ScenarioClass_field_35A3;  // 0x35A3
    char parTimeEasy[4];  // 0x35A4
    char parTimeMedium[4];  // 0x35A8
    char parTimeDifficult[4];  // 0x35AC
    char underParTitle;  // 0x35B0
    char underParMessage;  // 0x35CF
    char overParTitle;  // 0x35EE
    char overParMessage;  // 0x360D
    char lsLoadMessage;  // 0x362C
    char lsBrief;  // 0x364B
    char ls640BriefLocX[4];  // 0x366C
    char ls640BriefLocY[4];  // 0x3670
    char ls800BriefLocX[4];  // 0x3674
    char ls800BriefLocY[4];  // 0x3678
    char ls640BkgdName;  // 0x367C
    char ls800BkgdName;  // 0x36BC
    char ls800BkgdPal;  // 0x36FC
// --- flat members (END) ---
    static char SetGlobalToByID(void *a1, unsigned int a2, char a3);  // [w14e3] raw 0x689670
    static void * ProcessAmbientEffects(void *aP1, int a2, int a3);
    static int SetupAlliances(void *aP1);
    static int UpdateScriptActions(void *aP1);
    static void DestroyAndClearVector(void *aP1);
    static char SaveToINI(int aP1, void *a2, int a3);
    void* LoadMap_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon ScenarioClass::LoadMap is a method)
    static unsigned int LoadMap(...);
    void* checkWinningConditions(char a2);
    static ScenarioClass * * CopyStartPositions(void *a1);
    int Constructor();
    static int Constructor(void *aP1);
    static char Construct(void *aP1, double a2);
    char ClearFlag();
    char MissionStubReturnZero2(MPCooperative * aP0);
    char MissionStubReturnZero4(int a1);
    char StubReturnFalse();
    char StubReturnFalse10();
    char StubReturnFalse2();
    char StubReturnFalse3(int a1);
    char StubReturnFalse5(int a1, int a2, int a3);
    static char createStartingForces(void *a1);
    char initTriggers();
    char initUnits();
    char initWaypoints();
    char loadGame();
    static char processAI();
    char processTriggerEvents();
    char saveGame();
    int AssignStartPositions(char a1);
    int CleanupTemporary();
    int LoadScenarioAndStart(char *Source, char a2, double a3, int aP1);
    int MissionStubReturnZero();
    int MissionStubReturnZero3();
    int ReadMapINI(CCINIClass * aP1);
    int StubReturnFalse11();
    int initTeams();
    unsigned char * ProcessIntroTimer();
    unsigned int ResetIntroFlags(void *a1);
    void StubReturnFalse4(int a1);
    void StubReturnFalse6(int a1, int a2);
    void StubReturnFalse7(int a1);
    void StubReturnFalse8(int a1);
    void StubReturnFalse9(int a1);
    void StubReturnTrue();
    void StubReturnTrue2();
    void StubReturnTrue3();
    void StubReturnTrue4();
    void StubReturnTrue5();
    void StubReturnTrue6();
    void StubReturnTrue7();
    void sub_5D80B0();
    static char GetGlobalStateByID(ScenarioClass * aP1, unsigned int a2, uint8_t *a3);
    static char GetLocalStateByID(ScenarioClass * aP1, unsigned int a2, uint8_t *a3);
    unsigned int * Get_Waypoint_Location(unsigned int *a2, int a3);
     char Load(int a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);
     char SaveLoad_Prefix(int *dropshipUnitCounts);
    static void SaveLoad_Prefix_0(ScenarioClass * aP1, int a2);
    static int ShowMissionBriefing(ScenarioClass * aP1);
    static double UpdateLighting(...);  // C2597 interim stub
    static int CheckExists(ScenarioClass * aP1, int a2);
    static wchar_t * InitTimer(ScenarioClass * aP1);
    int CalcMinShroudLevel();  // 0x588990
    int LoadNetworkConfig(void *a1 = 0);  // 0x6980c0
    char  SetGlobalToByID(unsigned int a2, char a3);  // 0x689670
    int SaveGameOptions(void *a1 = 0);  // 0x5fad10
    int  Is_Waypoint_Valid(unsigned int a2);  // 0x68bd80
    char  Write_Waypoints(char * a2, void *a1 = 0);  // 0x68be90
    char * SetFileName(char *Source, void *a1 = 0);
    int LoadScenarioAndStart(char *Source, char a2, double a3, int aP1, void * a4);
    MSAnim * checkWinningConditions(unsigned int * Block, char a2);
    static int ReadWaypoints(...);  // w18j2 C3861 static supply
    static double SetLocalToByID(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
