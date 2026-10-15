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
    INILinkNode* Items;  // 0x4 [X30:type_map]
    void* Capacity;  // 0x8
    void* IsAllocated;  // 0xD
    char altNextScenario;  // 0x104
    int homeCell;  // 0x208 [X30:type_map]
    int altHomeCell;  // 0x20C [X30:type_map]
    int uniqueId;  // 0x210 [X30:type_map]
    char random[1012];  // 0x214
    unsigned int difficulty1;  // 0x608
    unsigned int difficulty2;  // 0x60C
    char elapsedTimer[12];  // 0x610
    char pauseTimer[12];  // 0x61C
    IUnknown* ScenarioClass_field_62C;  // 0x62C [X30:type_map]
    unsigned short unknown630;  // 0x630
    char waypoints[2808];  // 0x632
    void* startX;  // 0x112C [X30:type_map]
    int startY;  // 0x1130 [X30:type_map]
    void* width;  // 0x1134 [X30:type_map]
    void* height;  // 0x1138 [X30:type_map]
    int numberStartingPoints;  // 0x113C [X30:type_map]
    char startingPoints[64];  // 0x1140
    char houseIndices[64];  // 0x1180
    char houseHomeCells[32];  // 0x11C0
    bool teamsPresent;  // 0x11E0
    void* numCoopHumanStartSpots;  // 0x11E4 [X30:type_map]
    char missionTimer[12];  // 0x11E8
    unsigned int missionTimer_text_csf;  // 0x11F4
    char missionTimer_text;  // 0x11F8
    char shroudRegrowTimer[12];  // 0x1218
    char fogTimer[12];  // 0x1224
    char iceTimer[12];  // 0x1230
    char ScenarioClass_field_timer_123c[12];  // 0x123C
    char ambientTimer[12];  // 0x1248
    char techLevel[4];  // 0x1254
    int theater;  // 0x1258 [X30:type_map]
    char fileName;  // 0x125C
    int name;  // 0x1360 [X30:type_map]
    char uiName;  // 0x13BA
    char uiNameLoaded[90];  // 0x13DA
    void* AltNextScenario;  // 0x1434 [X30:type_map]
    unsigned int Brief;  // 0x1438
    unsigned int win;  // 0x143C
    void* Lose;  // 0x1440 [X30:type_map]
    unsigned int Action;  // 0x1444
    unsigned int PostScore;  // 0x1448
    void* PreMapSelect;  // 0x144C [X30:type_map]
    char Name[2048];  // 0x1450
    char briefingCsf;  // 0x1C50
    int themeIndex;  // 0x1C70 [X30:type_map]
    int humanPlayerHouseTypeIndex;  // 0x1C74 [X30:type_map]
    void* carryOverMoney;  // 0x1C78 [X30:type_map]
    int CarryOverCap;  // 0x1C80 [X30:type_map]
    void* Percent;  // 0x1C84 [X30:type_map]
    char globalVariables[2050];  // 0x1C88
    char localVariables[4100];  // 0x248C
    void * ptr_2888;  // 0x2888
    char view1[4];  // 0x3490
    char view2[4];  // 0x3494
    char view3[4];  // 0x3498
    char view4[4];  // 0x349C
    IUnknown* ScenarioClass_field_34A0;  // 0x34A0 [X30:type_map]
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
    IUnknown* playerSideIndex;  // 0x34B8 [X30:type_map]
    bool multiplayerOnly;  // 0x34BC
    bool isRandom;  // 0x34BD
    bool pickedUpAnyCrate;  // 0x34BE
    char ScenarioClass_field_timer_34C0[12];  // 0x34C0
    int campaignIndex;  // 0x34CC [X30:type_map]
    int StartingDropships;  // 0x34D0 [X30:type_map]
    TechnoTypeClass** allowableUnits;  // 0x34D4
    int allowableUnitsCount;  // 0x34D8 [X30:type_map]
    void* allowableUnitMaximums;  // 0x34DC
    char allowableMaximumsCount[4];  // 0x34E0
    void* dropshipUnitCounts;  // 0x34E4
    int dropshipCountsCount;  // 0x34E8 [X30:type_map]
    char ambientOriginal[4];  // 0x34EC
    void* ambientCurrent;  // 0x34F0 [X30:type_map]
    int ambientTarget;  // 0x34F4 [X30:type_map]
    char red[4];  // 0x34F8
    char green[4];  // 0x34FC
    int blue;  // 0x3500 [X30:type_map]
    char ground[4];  // 0x3504
    char level[4];  // 0x3508
    void* ionAmbient;  // 0x350C [X30:type_map]
    int ionRed;  // 0x3510 [X30:type_map]
    char ionGreen[4];  // 0x3514
    char ionBlue[4];  // 0x3518
    int ionGround;  // 0x351C [X30:type_map]
    char ionLevel[4];  // 0x3520
    char nukeAmbient[4];  // 0x3524
    int nukeRed;  // 0x3528 [X30:type_map]
    int nukeGreen;  // 0x352C [X30:type_map]
    int nukeBlue;  // 0x3530 [X30:type_map]
    int nukeGround;  // 0x3534 [X30:type_map]
    int nukeLevel;  // 0x3538 [X30:type_map]
    int nukeAmbientChangeRate;  // 0x353C [X30:type_map]
    int dominatorAmbient;  // 0x3540 [X30:type_map]
    int dominatorRed;  // 0x3544 [X30:type_map]
    int dominatorGreen;  // 0x3548 [X30:type_map]
    int dominatorBlue;  // 0x354C [X30:type_map]
    int dominatorGround;  // 0x3550 [X30:type_map]
    int dominatorLevel;  // 0x3554 [X30:type_map]
    int dominatorAmbientChangeRate;  // 0x3558 [X30:type_map]
    unsigned int unknown3598;  // 0x355C
    char initTime[4];  // 0x3560
    char stage[2];  // 0x3564
    void* InitTime;  // 0x359C
    bool ScenarioClass_field_35A2;  // 0x35A2
    unsigned char ScenarioClass_field_35A3;  // 0x35A3
    int parTimeEasy;  // 0x35A4 [X30:type_map]
    int parTimeMedium;  // 0x35A8 [X30:type_map]
    int parTimeDifficult;  // 0x35AC [X30:type_map]
    char underParTitle;  // 0x35B0
    char underParMessage;  // 0x35CF
    char overParTitle;  // 0x35EE
    char overParMessage;  // 0x360D
    char lsLoadMessage;  // 0x362C
    char lsBrief;  // 0x364B
    IUnknown* ls640BriefLocX;  // 0x366C [X30:type_map]
    IUnknown* ls640BriefLocY;  // 0x3670 [X30:type_map]
    IUnknown* ls800BriefLocX;  // 0x3674 [X30:type_map]
    IUnknown* ls800BriefLocY;  // 0x3678 [X30:type_map]
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

    void * action;  // X10 supply (member_lookup)
    void * brief;  // X10 supply (member_lookup)
    int carryOverCap;  // X10 supply (member_lookup)
    void * intro;  // X10 supply (member_lookup)
    void * lose;  // X10 supply (member_lookup)
    int percent;  // X10 supply (member_lookup)
    void * postScore;  // X10 supply (member_lookup)
    void * preMapSelect;  // X10 supply (member_lookup)
    unsigned int q3578;  // X10 supply (member_lookup)
    int q7280;  // X10 supply (member_lookup)
    int startingDropships;  // X10 supply (member_lookup)
    unsigned int u32_34E1;  // X10 supply (member_lookup)
    unsigned int u32_34FD;  // X10 supply (member_lookup)
    unsigned int u32_3519;  // X10 supply (member_lookup)
    unsigned int u32_357C;  // X10 supply (member_lookup)
    unsigned int u32_3580;  // X10 supply (member_lookup)
    unsigned int u32_3584;  // X10 supply (member_lookup)
    unsigned int u32_3588;  // X10 supply (member_lookup)
    unsigned int u32_358C;  // X10 supply (member_lookup)
    unsigned int u32_3590;  // X10 supply (member_lookup)
    unsigned int u32_3594;  // X10 supply (member_lookup)
    char u8_15200;  // X10 supply (member_lookup)
    char u8_15204;  // X10 supply (member_lookup)
    char u8_15242;  // X10 supply (member_lookup)
    char u8_152C2;  // X10 supply (member_lookup)
    char u8_15300;  // X10 supply (member_lookup)
    char u8_15308;  // X10 supply (member_lookup)
    char u8_15342;  // X10 supply (member_lookup)
    char u8_15742;  // X10 supply (member_lookup)
    char u8_15746;  // X10 supply (member_lookup)
    char u8_15780;  // X10 supply (member_lookup)
    char u8_15784;  // X10 supply (member_lookup)
    char u8_15845;  // X10 supply (member_lookup)
    char u8_15906;  // X10 supply (member_lookup)
    char u8_159C7;  // X10 supply (member_lookup)
    char u8_684;  // X10 supply (member_lookup)
    char u8_6DC6;  // X10 supply (member_lookup)
    char u8_6E00;  // X10 supply (member_lookup)
    char u8_6E04;  // X10 supply (member_lookup)
    char u8_6E08;  // X10 supply (member_lookup)
    char u8_6E42;  // X10 supply (member_lookup)
    char u8_6E46;  // X10 supply (member_lookup)
    char u8_B600;  // X10 supply (member_lookup)
    char u8_B608;  // X10 supply (member_lookup)
    char u8_B642;  // X10 supply (member_lookup)
    char u8_B646;  // X10 supply (member_lookup)
    char u8_B680;  // X10 supply (member_lookup)
    char u8_D04;  // X10 supply (member_lookup)
    char u8_D08;  // X10 supply (member_lookup)
    int __pad_628;  // 0x628 [X30:type_map]
    unsigned char __pad_112A;  // 0x112A [X30:canon]
    unsigned char __pad_11E1;  // 0x11E1 [X30:canon]
    int __pad_248A;  // 0x248A [X30:type_map]
    unsigned char __pad_34BF;  // 0x34BF [X30:canon]
    unsigned char __pad_3566;  // 0x3566 [X30:canon]
    int __pad_35A0;  // 0x35A0 [X30:type_map]
    unsigned char __pad_366A;  // 0x366A [X30:canon]
};

} // namespace gamemd
