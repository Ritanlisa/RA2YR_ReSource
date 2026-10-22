// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply
struct CampaignScore;  // fix_fwd_type_supply
struct TechnoTypeClass;  // fix_fwd_type_supply
struct TimerStruct;  // fix_fwd_type_supply

struct ScenarioClass {
    char nextScenario[260];  // 0x0
    char altNextScenario[260];  // 0x104
    int homeCell;  // 0x208
    int altHomeCell;  // 0x20C
    int uniqueId;  // 0x210
    char random[1012];  // 0x214
    unsigned int difficulty1;  // 0x608
    unsigned int difficulty2;  // 0x60C
    char elapsedTimer[12];  // 0x610
    char pauseTimer[12];  // 0x61C
    int __pad_628;  // 0x628
    IUnknown * ScenarioClass_field_62C;  // 0x62C
    unsigned short unknown630;  // 0x630
    char waypoints[2808];  // 0x632
    unsigned char __pad_112A;  // 0x112A
    char __pad_112B[1];  // 0x112B
    void * startX;  // 0x112C
    int startY;  // 0x1130
    int width;  // 0x1134
    int height;  // 0x1138
    int numberStartingPoints;  // 0x113C
    char startingPoints[64];  // 0x1140
    char houseIndices[64];  // 0x1180
    char houseHomeCells[32];  // 0x11C0
    bool teamsPresent;  // 0x11E0
    unsigned char __pad_11E1;  // 0x11E1
    char __pad_11E2[2];  // 0x11E2
    void * numCoopHumanStartSpots;  // 0x11E4
    char missionTimer[12];  // 0x11E8
    unsigned int missionTimer_text_csf;  // 0x11F4
    int missionTimer_text[8];  // 0x11F8
    char shroudRegrowTimer[12];  // 0x1218
    char fogTimer[12];  // 0x1224
    char iceTimer[12];  // 0x1230
    char ScenarioClass_field_timer_123c[12];  // 0x123C
    char ambientTimer[12];  // 0x1248
    int techLevel;  // 0x1254
    int theater;  // 0x1258
    char fileName[260];  // 0x125C
    char name[90];  // 0x1360
    char uiName[32];  // 0x13BA
    char uiNameLoaded[90];  // 0x13DA
    void * intro;  // 0x1434
    void * brief;  // 0x1438
    unsigned int win;  // 0x143C
    void * lose;  // 0x1440
    void * action;  // 0x1444
    void * postScore;  // 0x1448
    void * preMapSelect;  // 0x144C
    char Name[2048];  // 0x1450
    int briefingCsf[8];  // 0x1C50
    int themeIndex;  // 0x1C70
    int humanPlayerHouseTypeIndex;  // 0x1C74
    int carryOverMoney[2];  // 0x1C78
    int carryOverCap;  // 0x1C80
    int percent;  // 0x1C84
    char globalVariables[2050];  // 0x1C88
    char __pad_248A[2];  // 0x248A
    char localVariables[4100];  // 0x248C
    char view1[4];  // 0x3490
    char view2[4];  // 0x3494
    char view3[4];  // 0x3498
    char view4[4];  // 0x349C
    IUnknown * ScenarioClass_field_34A0;  // 0x34A0
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
    IUnknown * playerSideIndex;  // 0x34B8
    bool multiplayerOnly;  // 0x34BC
    bool isRandom;  // 0x34BD
    bool pickedUpAnyCrate;  // 0x34BE
    unsigned char __pad_34BF;  // 0x34BF
    char ScenarioClass_field_timer_34C0[12];  // 0x34C0
    int campaignIndex;  // 0x34CC
    int startingDropships;  // 0x34D0
    TechnoTypeClass * * allowableUnits;  // 0x34D4
    int allowableUnitsCount;  // 0x34D8
    void * allowableUnitMaximums;  // 0x34DC
    char allowableMaximumsCount[4];  // 0x34E0
    void * dropshipUnitCounts;  // 0x34E4
    int dropshipCountsCount;  // 0x34E8
    char ambientOriginal[4];  // 0x34EC
    void * ambientCurrent;  // 0x34F0
    int ambientTarget;  // 0x34F4
    char red[4];  // 0x34F8
    char green[4];  // 0x34FC
    int blue;  // 0x3500
    int ground;  // 0x3504
    int level;  // 0x3508
    void * ionAmbient;  // 0x350C
    int ionRed;  // 0x3510
    int ionGreen;  // 0x3514
    int ionBlue;  // 0x3518
    int ionGround;  // 0x351C
    int ionLevel;  // 0x3520
    int nukeAmbient;  // 0x3524
    int nukeRed;  // 0x3528
    int nukeGreen;  // 0x352C
    int nukeBlue;  // 0x3530
    int nukeGround;  // 0x3534
    int nukeLevel;  // 0x3538
    int nukeAmbientChangeRate;  // 0x353C
    int dominatorAmbient;  // 0x3540
    int dominatorRed;  // 0x3544
    int dominatorGreen;  // 0x3548
    int dominatorBlue;  // 0x354C
    int dominatorGround;  // 0x3550
    int dominatorLevel;  // 0x3554
    int dominatorAmbientChangeRate;  // 0x3558
    unsigned int unknown3598;  // 0x355C
    int initTime;  // 0x3560
    short stage;  // 0x3564
    unsigned char __pad_3566;  // 0x3566
    char __pad_3567[17];  // 0x3567
    unsigned int q3578;  // 0x3578
    unsigned int u32_357C;  // 0x357C
    unsigned int u32_3580;  // 0x3580
    unsigned int u32_3584;  // 0x3584
    unsigned int u32_3588;  // 0x3588
    unsigned int u32_358C;  // 0x358C
    unsigned int u32_3590;  // 0x3590
    unsigned int u32_3594;  // 0x3594
    char __pad_3598[4];  // 0x3598
    void * InitTime;  // 0x359C
    char __pad_35A0[2];  // 0x35A0
    bool ScenarioClass_field_35A2;  // 0x35A2
    unsigned char ScenarioClass_field_35A3;  // 0x35A3
    int parTimeEasy;  // 0x35A4
    int parTimeMedium;  // 0x35A8
    int parTimeDifficult;  // 0x35AC
    char underParTitle[31];  // 0x35B0
    char underParMessage[31];  // 0x35CF
    char overParTitle[31];  // 0x35EE
    char overParMessage[31];  // 0x360D
    char lsLoadMessage[31];  // 0x362C
    char lsBrief[31];  // 0x364B
    unsigned char __pad_366A;  // 0x366A
    char __pad_366B[1];  // 0x366B
    IUnknown * ls640BriefLocX;  // 0x366C
    int ls640BriefLocY;  // 0x3670
    int ls800BriefLocX;  // 0x3674
    int ls800BriefLocY;  // 0x3678
    int ls640BkgdName[16];  // 0x367C
    int ls800BkgdName[16];  // 0x36BC
    int ls800BkgdPal[16];  // 0x36FC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static char SetGlobalToByID(void *a1, unsigned int a2, char a3);  // [w14e3] raw 0x689670
    static void * ProcessAmbientEffects(void *aP1, int a2, int a3);
    static int SetupAlliances(void *aP1);
    static int UpdateScriptActions(void *aP1);
    static void DestroyAndClearVector(void *aP1);
    static char SaveToINI(int aP1, void *a2, int a3);
    static unsigned int LoadMap(char p0, int p1, double p2);  // x4:signals@0x686b20
    void* checkWinningConditions(char a2);
    static ScenarioClass * * CopyStartPositions(void *a1);
    int Constructor();
    static int Constructor(void *aP1);
    static char Construct(void *aP1, double a2);
    char ClearFlag();
    static char MissionStubReturnZero2(MPCooperative * aP0);
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
    static int ReadWaypoints(int p0);  // x4:signals@0x68bdc0
};

} // namespace gamemd
