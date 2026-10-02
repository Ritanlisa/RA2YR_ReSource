// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AbstractClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct CampaignScore;  // fix_fwd_type_supply
struct TechnoTypeClass;  // fix_fwd_type_supply
struct TimerStruct;  // fix_fwd_type_supply

struct ScenarioClass {
// --- flat members (BEGIN) ---
    char nextScenario;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    unsigned int q00B;  // 0xB
    void* q00C;  // 0xC
    void* IsAllocated;  // 0xD
    void* q010;  // 0x10
    void* q014;  // 0x14
    void* q018;  // 0x18
    unsigned int q01C;  // 0x1C
    unsigned int q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    unsigned int q01F;  // 0x1F
    unsigned int q020;  // 0x20
    void* q024;  // 0x24
    AbstractClass* q028;  // 0x28
    void* q030;  // 0x30
    void* q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned int q03C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    unsigned int q045;  // 0x45
    unsigned int q046;  // 0x46
    unsigned int u32_48;  // 0x48
    unsigned int u32_4A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    CampaignClass* q058;  // 0x58
    unsigned int q05C;  // 0x5C
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned int q070;  // 0x70
    unsigned int q074;  // 0x74
    unsigned int u32_80;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int q088;  // 0x88
    unsigned int u32_89;  // 0x89
    unsigned int u32_8B;  // 0x8B
    unsigned int u32_8C;  // 0x8C
    unsigned int u32_90;  // 0x90
    unsigned int u32_94;  // 0x94
    unsigned int u32_98;  // 0x98
    unsigned int u32_9C;  // 0x9C
    unsigned int u32_A0;  // 0xA0
    unsigned int u32_A8;  // 0xA8
    unsigned int u32_B0;  // 0xB0
    void* q0BC;  // 0xBC
    unsigned int q0C0;  // 0xC0
    unsigned int u32_C4;  // 0xC4
    unsigned int q0CC;  // 0xCC
    unsigned int u32_D0;  // 0xD0
    unsigned int u32_D4;  // 0xD4
    unsigned int q0EC;  // 0xEC
    unsigned int q0F0;  // 0xF0
    unsigned int q0F4;  // 0xF4
    void* q0F7;  // 0xF7
    unsigned int q0F8;  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    unsigned int q0FC;  // 0xFC
    unsigned int q100;  // 0x100
    char altNextScenario;  // 0x104
    void* q108;  // 0x108
    unsigned int q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned int q128;  // 0x128
    unsigned int q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned int u32_138;  // 0x138
    void* q13C;  // 0x13C
    void* q140;  // 0x140
    unsigned int q144;  // 0x144
    void* q148;  // 0x148
    unsigned int q150;  // 0x150
    unsigned int q160;  // 0x160
    unsigned int u32_174;  // 0x174
    unsigned int u32_178;  // 0x178
    bool q17B;  // 0x17B
    CampaignScore* q17C;  // 0x17C
    unsigned int u32_180;  // 0x180
    unsigned int q188;  // 0x188
    void* q18C;  // 0x18C
    void* q198;  // 0x198
    void* q1EC;  // 0x1EC
    unsigned int q204;  // 0x204
    char homeCell[4];  // 0x208
    char altHomeCell[4];  // 0x20C
    char uniqueId[4];  // 0x210
    char random[1012];  // 0x214
    unsigned int q228;  // 0x228
    unsigned int q240;  // 0x240
    unsigned int q244;  // 0x244
    unsigned int q248;  // 0x248
    unsigned int q260;  // 0x260
    unsigned int q264;  // 0x264
    unsigned int u32_26C;  // 0x26C
    unsigned int u32_270;  // 0x270
    unsigned int q274;  // 0x274
    unsigned int q278;  // 0x278
    unsigned int q280;  // 0x280
    unsigned int q304;  // 0x304
    unsigned char q308;  // 0x308
    CampaignScore* q30C;  // 0x30C
    unsigned int q310;  // 0x310
    unsigned int q320;  // 0x320
    unsigned int q324;  // 0x324
    unsigned int q328;  // 0x328
    unsigned int q338;  // 0x338
    CampaignScore* q380;  // 0x380
    unsigned int q384;  // 0x384
    unsigned char q3D7;  // 0x3D7
    void* q408;  // 0x408
    int q520;  // 0x520
    unsigned int q524;  // 0x524
    unsigned int q528;  // 0x528
    unsigned int q530;  // 0x530
    unsigned int u32_548;  // 0x548
    unsigned int u32_54C;  // 0x54C
    unsigned int q580;  // 0x580
    unsigned int q584;  // 0x584
    unsigned int q594;  // 0x594
    unsigned int q598;  // 0x598
    unsigned int difficulty1;  // 0x608
    unsigned int difficulty2;  // 0x60C
    char elapsedTimer[12];  // 0x610
    void* q614;  // 0x614
    unsigned int q618;  // 0x618
    char pauseTimer[12];  // 0x61C
    unsigned int q620;  // 0x620
    unsigned int q624;  // 0x624
    unsigned int q628;  // 0x628
    unsigned int ScenarioClass_field_62C;  // 0x62C
    unsigned short unknown630;  // 0x630
    char waypoints[2808];  // 0x632
    unsigned int q640;  // 0x640
    unsigned int u32_6E4;  // 0x6E4
    unsigned int u32_724;  // 0x724
    unsigned int u32_728;  // 0x728
    unsigned int u32_72C;  // 0x72C
    unsigned int u32_730;  // 0x730
    unsigned int u32_73C;  // 0x73C
    unsigned int u32_740;  // 0x740
    unsigned int u32_744;  // 0x744
    unsigned int u32_748;  // 0x748
    unsigned int u32_74C;  // 0x74C
    unsigned int u32_750;  // 0x750
    unsigned int u32_754;  // 0x754
    unsigned int u32_758;  // 0x758
    unsigned int q774;  // 0x774
    CampaignScore* q780;  // 0x780
    unsigned int q784;  // 0x784
    unsigned int q790;  // 0x790
    unsigned int u32_7BC;  // 0x7BC
    unsigned int u32_7C0;  // 0x7C0
    unsigned int u32_7E4;  // 0x7E4
    unsigned int u32_7F0;  // 0x7F0
    unsigned int q800;  // 0x800
    unsigned int q804;  // 0x804
    unsigned int q808;  // 0x808
    unsigned int u32_814;  // 0x814
    unsigned int u32_818;  // 0x818
    unsigned int u32_81C;  // 0x81C
    unsigned int u32_820;  // 0x820
    unsigned int q824;  // 0x824
    unsigned int q834;  // 0x834
    unsigned int q850;  // 0x850
    unsigned int q900;  // 0x900
    unsigned int q914;  // 0x914
    void* q918;  // 0x918
    unsigned int u32_B50;  // 0xB50
    unsigned int u32_B60;  // 0xB60
    unsigned int u32_B64;  // 0xB64
    unsigned int u32_B68;  // 0xB68
    unsigned int u32_B78;  // 0xB78
    unsigned int u32_C54;  // 0xC54
    unsigned int u32_C64;  // 0xC64
    unsigned int u32_CB0;  // 0xCB0
    unsigned int u32_EAC;  // 0xEAC
    unsigned int q1030;  // 0x1030
    unsigned int u32_1034;  // 0x1034
    unsigned int u32_1038;  // 0x1038
    unsigned int u32_103C;  // 0x103C
    unsigned int u32_1040;  // 0x1040
    unsigned int u32_1048;  // 0x1048
    unsigned int u32_1064;  // 0x1064
    unsigned int u32_1068;  // 0x1068
    unsigned int u32_106C;  // 0x106C
    unsigned int u32_1070;  // 0x1070
    unsigned int u32_1074;  // 0x1074
    unsigned char q112A;  // 0x112A
    char startX[4];  // 0x112C
    char startY[4];  // 0x1130
    char width[4];  // 0x1134
    char height[4];  // 0x1138
    char numberStartingPoints[4];  // 0x113C
    char startingPoints[64];  // 0x1140
    unsigned int q115C;  // 0x115C
    unsigned int q1160;  // 0x1160
    unsigned int q1164;  // 0x1164
    unsigned int q1169;  // 0x1169
    unsigned int q116C;  // 0x116C
    unsigned int q1170;  // 0x1170
    char houseIndices[64];  // 0x1180
    char houseHomeCells[32];  // 0x11C0
    bool teamsPresent;  // 0x11E0
    unsigned char q11E1;  // 0x11E1
    char numCoopHumanStartSpots[4];  // 0x11E4
    char missionTimer[12];  // 0x11E8
    unsigned int q11EC;  // 0x11EC
    unsigned int q11F0;  // 0x11F0
    unsigned int missionTimer_text_csf;  // 0x11F4
    char missionTimer_text;  // 0x11F8
    char shroudRegrowTimer[12];  // 0x1218
    unsigned int q121C;  // 0x121C
    unsigned int q1220;  // 0x1220
    char fogTimer[12];  // 0x1224
    unsigned int q1228;  // 0x1228
    unsigned int q122C;  // 0x122C
    char iceTimer[12];  // 0x1230
    unsigned int q1234;  // 0x1234
    unsigned int q1238;  // 0x1238
    char ScenarioClass_field_timer_123c[12];  // 0x123C
    unsigned int q1240;  // 0x1240
    unsigned int q1244;  // 0x1244
    char ambientTimer[12];  // 0x1248
    unsigned int q124C;  // 0x124C
    unsigned int q1250;  // 0x1250
    unsigned int techLevel;  // 0x1254
    char theater[4];  // 0x1258
    char fileName;  // 0x125C
    void* q1308;  // 0x1308
    unsigned int q1320;  // 0x1320
    unsigned int q1328;  // 0x1328
    unsigned int u32_132C;  // 0x132C
    unsigned int q1330;  // 0x1330
    unsigned int q135F;  // 0x135F
    char name[90];  // 0x1360
    unsigned int u32_1378;  // 0x1378
    unsigned int u32_1380;  // 0x1380
    unsigned int u32_1384;  // 0x1384
    unsigned int u32_1388;  // 0x1388
    unsigned int q1398;  // 0x1398
    char uiName;  // 0x13BA
    char uiNameLoaded[90];  // 0x13DA
    unsigned int q1408;  // 0x1408
    unsigned int q1428;  // 0x1428
    unsigned int intro;  // 0x1434
    unsigned int brief;  // 0x1438
    unsigned int win;  // 0x143C
    unsigned int lose;  // 0x1440
    unsigned int action;  // 0x1444
    unsigned int postScore;  // 0x1448
    unsigned int preMapSelect;  // 0x144C
    char briefing[2048];  // 0x1450
    unsigned int u32_1504;  // 0x1504
    unsigned int u32_1508;  // 0x1508
    unsigned int u32_150C;  // 0x150C
    unsigned int u32_1510;  // 0x1510
    unsigned int u32_1514;  // 0x1514
    unsigned int u32_1518;  // 0x1518
    unsigned int u32_1520;  // 0x1520
    unsigned int u32_1524;  // 0x1524
    unsigned int u32_152C;  // 0x152C
    unsigned int u32_1530;  // 0x1530
    unsigned int u32_1534;  // 0x1534
    unsigned int u32_1538;  // 0x1538
    unsigned int u32_153C;  // 0x153C
    unsigned int u32_1540;  // 0x1540
    int q1544;  // 0x1544
    unsigned int q1548;  // 0x1548
    unsigned int u32_154C;  // 0x154C
    unsigned int u32_1550;  // 0x1550
    unsigned int q1554;  // 0x1554
    unsigned int u32_1558;  // 0x1558
    unsigned int u32_155C;  // 0x155C
    unsigned int q1560;  // 0x1560
    unsigned int q1564;  // 0x1564
    unsigned int q1568;  // 0x1568
    unsigned int u32_156C;  // 0x156C
    unsigned int u32_1574;  // 0x1574
    unsigned int u32_1578;  // 0x1578
    unsigned int q1580;  // 0x1580
    unsigned int u32_1584;  // 0x1584
    unsigned int u32_1590;  // 0x1590
    unsigned int u32_159C;  // 0x159C
    unsigned int u32_15A8;  // 0x15A8
    unsigned int u32_15B4;  // 0x15B4
    unsigned int u32_15C4;  // 0x15C4
    unsigned int u32_15C8;  // 0x15C8
    unsigned int u32_15E4;  // 0x15E4
    unsigned int u32_15FC;  // 0x15FC
    unsigned int q1600;  // 0x1600
    unsigned int q1634;  // 0x1634
    unsigned int q1764;  // 0x1764
    unsigned int q1840;  // 0x1840
    unsigned int q1860;  // 0x1860
    unsigned int q1864;  // 0x1864
    unsigned int q1868;  // 0x1868
    unsigned int q1880;  // 0x1880
    unsigned int u32_18C8;  // 0x18C8
    unsigned int q1908;  // 0x1908
    unsigned char q1910;  // 0x1910
    CampaignScore* q1920;  // 0x1920
    unsigned int q1924;  // 0x1924
    unsigned int q1980;  // 0x1980
    unsigned int q1984;  // 0x1984
    char briefingCsf;  // 0x1C50
    char themeIndex[4];  // 0x1C70
    char humanPlayerHouseTypeIndex[4];  // 0x1C74
    double carryOverMoney;  // 0x1C78
    AbstractClass* q1C7C;  // 0x1C7C
    char carryOverCap[4];  // 0x1C80
    char percent[4];  // 0x1C84
    char globalVariables[2050];  // 0x1C88
    unsigned int q1ED8;  // 0x1ED8
    unsigned int q1ED9;  // 0x1ED9
    unsigned int q1FC0;  // 0x1FC0
    unsigned int q1FC1;  // 0x1FC1
    unsigned int q2020;  // 0x2020
    unsigned int q2048;  // 0x2048
    unsigned int q2054;  // 0x2054
    unsigned int q2080;  // 0x2080
    unsigned int q2084;  // 0x2084
    unsigned int q2100;  // 0x2100
    unsigned int q2128;  // 0x2128
    unsigned int q2178;  // 0x2178
    CampaignScore* q2198;  // 0x2198
    unsigned int q2304;  // 0x2304
    unsigned int q2324;  // 0x2324
    void* q2328;  // 0x2328
    char localVariables[4100];  // 0x248C
    unsigned int u32_24B2;  // 0x24B2
    CampaignScore* q2884;  // 0x2884
    void * ptr_2888;  // 0x2888
    unsigned int u32_288C;  // 0x288C
    void* q2890;  // 0x2890
    unsigned int u32_2894;  // 0x2894
    void* q2898;  // 0x2898
    void* q289C;  // 0x289C
    unsigned int u32_28A0;  // 0x28A0
    unsigned int u32_28A4;  // 0x28A4
    void* q28A8;  // 0x28A8
    void* q28B8;  // 0x28B8
    unsigned int u32_28FC;  // 0x28FC
    unsigned int u32_2900;  // 0x2900
    unsigned int u32_2904;  // 0x2904
    unsigned char u8_2909;  // 0x2909
    unsigned int u32_290C;  // 0x290C
    unsigned int u32_2910;  // 0x2910
    unsigned int u32_2914;  // 0x2914
    unsigned int u32_2918;  // 0x2918
    unsigned int u32_291C;  // 0x291C
    unsigned char u8_2921;  // 0x2921
    unsigned int u32_2924;  // 0x2924
    unsigned int u32_2928;  // 0x2928
    unsigned int u32_2FF0;  // 0x2FF0
    unsigned int u32_2FF4;  // 0x2FF4
    unsigned int u32_30AC;  // 0x30AC
    unsigned int u32_30B0;  // 0x30B0
    unsigned int u32_30C4;  // 0x30C4
    unsigned char u8_30C8;  // 0x30C8
    void* q30CC;  // 0x30CC
    CampaignScore* q30D0;  // 0x30D0
    void* q30D4;  // 0x30D4
    unsigned int q3248;  // 0x3248
    unsigned int u32_348E;  // 0x348E
    char view1[4];  // 0x3490
    unsigned int u32_3492;  // 0x3492
    char view2[4];  // 0x3494
    unsigned int u32_3496;  // 0x3496
    char view3[4];  // 0x3498
    unsigned int u32_349A;  // 0x349A
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
    unsigned char q34BF;  // 0x34BF
    char ScenarioClass_field_timer_34C0[12];  // 0x34C0
    unsigned int q34C4;  // 0x34C4
    unsigned int q34C8;  // 0x34C8
    char campaignIndex[4];  // 0x34CC
    char startingDropships[4];  // 0x34D0
    TechnoTypeClass** allowableUnits;  // 0x34D4
    char allowableUnitsCount[4];  // 0x34D8
    void* allowableUnitMaximums;  // 0x34DC
    char allowableMaximumsCount[4];  // 0x34E0
    unsigned char u8_34E1;  // 0x34E1
    void* dropshipUnitCounts;  // 0x34E4
    unsigned int dropshipCountsCount;  // 0x34E8
    char ambientOriginal[4];  // 0x34EC
    unsigned int ambientCurrent;  // 0x34F0
    char ambientTarget[4];  // 0x34F4
    char red[4];  // 0x34F8
    char green[4];  // 0x34FC
    unsigned char u8_34FD;  // 0x34FD
    char blue[4];  // 0x3500
    unsigned int ground;  // 0x3504
    char level[4];  // 0x3508
    unsigned int ionAmbient;  // 0x350C
    char ionRed[4];  // 0x3510
    char ionGreen[4];  // 0x3514
    char ionBlue[4];  // 0x3518
    unsigned char u8_3519;  // 0x3519
    char ionGround[4];  // 0x351C
    unsigned int ionLevel;  // 0x3520
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
    unsigned char q3566;  // 0x3566
    unsigned int q3568;  // 0x3568
    unsigned int q356C;  // 0x356C
    unsigned int q3570;  // 0x3570
    unsigned int q3574;  // 0x3574
    void* q3578;  // 0x3578
    void* q357C;  // 0x357C
    void* q3580;  // 0x3580
    void* q3584;  // 0x3584
    void* q3588;  // 0x3588
    void* q358C;  // 0x358C
    void* q3590;  // 0x3590
    void* q3594;  // 0x3594
    unsigned char q3598;  // 0x3598
    void* q359C;  // 0x359C
    unsigned int q35A0;  // 0x35A0
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
    unsigned char q366A;  // 0x366A
    char ls640BriefLocX[4];  // 0x366C
    char ls640BriefLocY[4];  // 0x3670
    char ls800BriefLocX[4];  // 0x3674
    char ls800BriefLocY[4];  // 0x3678
    char ls640BkgdName;  // 0x367C
    char ls800BkgdName;  // 0x36BC
    char ls800BkgdPal;  // 0x36FC
    unsigned int *__pad_0;
    unsigned int *__pad_3566;
    unsigned int __pad_628;
    unsigned int Timer;
// --- flat members (END) ---
    void* checkWinningConditions(char a2);
    static ScenarioClass * * CopyStartPositions(void *a1);
    TimerStruct * * Constructor(void *a1, void *a2, void *a3);
    char ClearFlag();
    char MissionStubReturnZero2(MPCooperative * aP0);
    char MissionStubReturnZero4(int a1);
    char StubReturnFalse();
    char StubReturnFalse10();
    char StubReturnFalse2();
    char StubReturnFalse3(int a1);
    char StubReturnFalse5(int a1, int a2, int a3);
    char createStartingForces(void *a1);
    char initTriggers();
    char initUnits();
    char initWaypoints();
    char loadGame();
    char processAI();
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
    static double GetGlobalStateByID(...);  // C2597 interim stub
    static double GetLocalStateByID(...);  // C2597 interim stub
    static double Get_Waypoint_Location(unsigned int *a2, int a3, int a4, int a5, int a6, int a7, int a8);
     double Load(...);  // C2597 interim stub
     double SaveLoad_Prefix(...);  // C2597 interim stub
    static double SaveLoad_Prefix_0(...);  // C2597 interim stub
    static double ShowMissionBriefing(...);  // C2597 interim stub
    static double UpdateLighting(...);  // C2597 interim stub
    static double CheckExists(...);  // C2597 interim stub
    static double InitTimer(...);  // C2597 interim stub
    int CalcMinShroudLevel();  // 0x588990
    int LoadNetworkConfig();  // 0x6980c0
    char SetGlobalToByID(unsigned int a2, char a3);  // 0x689670
    int SaveGameOptions();  // 0x5fad10
    int Is_Waypoint_Valid(unsigned int a2);  // 0x68bd80
    char Write_Waypoints(char *a2);  // 0x68be90
};

} // namespace gamemd
