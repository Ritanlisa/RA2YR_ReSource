// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply
struct CampaignScore;  // fix_fwd_type_supply
struct TechnoTypeClass;  // fix_fwd_type_supply
struct TimerStruct;  // fix_fwd_type_supply

struct ScenarioClass {
    static char SetGlobalToByID(void *a1, unsigned int a2, char a3);  // [w14e3] raw 0x689670
    static void * ProcessAmbientEffects(void *aP1, int a2, int a3);  // 0x55BB40 raw: _DWORD* __thiscall ScenarioClass::ProcessAmbientEffects(ScenarioClass*, int, int)  // G57w10 r5 D-classbody supply (raw-anchored)
    static int SetupAlliances(void *aP1);  // 0x686890 raw: int __thiscall ScenarioClass::SetupAlliances(ScenarioClass*)  // G57w10 r5 D-classbody supply (raw-anchored)
    static int UpdateScriptActions(void *aP1);  // 0x54E4D0 raw: int __thiscall ScenarioClass::UpdateScriptActions(ScenarioClass*)  // G57w10 r5 D-classbody supply (raw-anchored)
    static void DestroyAndClearVector(void *aP1);  // 0x62E650 raw: void __thiscall ScenarioClass::DestroyAndClearVector(ScenarioClass*)  // G57w10 r5 D-classbody supply (raw-anchored)
    static void DestroyAndClearVector();  // 0x62E650 0-arg site form (addr68)  // G57w10 r5 D-classbody supply (raw-anchored)
    static char SaveToINI(int aP1, void *a2, int a3);  // 0x68AD70 raw: char __thiscall ScenarioClass::SaveToINI(int this, char*, char)  // G57w10 r5 D-classbody supply (raw-anchored)

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
    unsigned int q020;  // 0x20
    void* q024;  // 0x24
    AbstractClass* q028;  // 0x28
    void* q030;  // 0x30
    void* q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned int q03C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    CampaignClass* q058;  // 0x58
    unsigned int q05C;  // 0x5C
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned int u32_80;  // 0x80
    unsigned int u32_94;  // 0x94
    unsigned int u32_B0;  // 0xB0
    unsigned int u32_C4;  // 0xC4
    unsigned int u32_D0;  // 0xD0
    unsigned int u32_D4;  // 0xD4
    unsigned int q0F0;  // 0xF0
    unsigned int q0F4;  // 0xF4
    unsigned int q0F8;  // 0xF8
    unsigned int q100;  // 0x100
    char altNextScenario;  // 0x104
    unsigned int q114;  // 0x114
    unsigned int q128;  // 0x128
    unsigned int q130;  // 0x130
    void* q13C;  // 0x13C
    void* q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q150;  // 0x150
    unsigned int u32_174;  // 0x174
    bool q17B;  // 0x17B
    unsigned int u32_180;  // 0x180
    void* q1EC;  // 0x1EC
    char uniqueId[4];  // 0x210
    char random[1012];  // 0x214
    unsigned int q264;  // 0x264
    unsigned int q280;  // 0x280
    unsigned char q308;  // 0x308
    unsigned int q324;  // 0x324
    int q520;  // 0x520
    unsigned int difficulty2;  // 0x60C
    char elapsedTimer[12];  // 0x610
    char pauseTimer[12];  // 0x61C
    char waypoints[2808];  // 0x632
    unsigned int u32_744;  // 0x744
    unsigned int u32_748;  // 0x748
    char width[4];  // 0x1134
    char height[4];  // 0x1138
    char houseHomeCells[32];  // 0x11C0
    char missionTimer[12];  // 0x11E8
    unsigned int missionTimer_text_csf;  // 0x11F4
    char missionTimer_text;  // 0x11F8
    char shroudRegrowTimer[12];  // 0x1218
    char fogTimer[12];  // 0x1224
    char iceTimer[12];  // 0x1230
    char ScenarioClass_field_timer_123c[12];  // 0x123C
    char ambientTimer[12];  // 0x1248
    unsigned int techLevel;  // 0x1254
    char theater[4];  // 0x1258
    char fileName;  // 0x125C
    char name[90];  // 0x1360
    char uiName;  // 0x13BA
    char uiNameLoaded[90];  // 0x13DA
    char briefing[2048];  // 0x1450
    char briefingCsf;  // 0x1C50
    char percent[4];  // 0x1C84
    char globalVariables[2050];  // 0x1C88
    char localVariables[4100];  // 0x248C
    char view1[4];  // 0x3490
    char view2[4];  // 0x3494
    char view3[4];  // 0x3498
    bool variablesChanged;  // 0x34AA
    char playerSideIndex[4];  // 0x34B8
    bool isRandom;  // 0x34BD
    char ScenarioClass_field_timer_34C0[12];  // 0x34C0
    int campaignIndex;  // 0x34CC
    TechnoTypeClass** allowableUnits;  // 0x34D4
    void* dropshipUnitCounts;  // 0x34E4
    unsigned int dropshipCountsCount;  // 0x34E8
    unsigned int ambientCurrent;  // 0x34F0
    int blue;  // 0x3500
    unsigned int ground;  // 0x3504
    char level[4];  // 0x3508
    unsigned int ionAmbient;  // 0x350C
    int ionGround;  // 0x351C
    unsigned int ionLevel;  // 0x3520
    char parTimeMedium[4];  // 0x35A8
    char parTimeDifficult[4];  // 0x35AC
    char underParTitle;  // 0x35B0
    char lsLoadMessage;  // 0x362C
    char lsBrief;  // 0x364B
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

    void* LoadMap;  // 0x0 (no offset truth)
// --- flat members (END) ---
    void* checkWinningConditions(char a2);
    static ScenarioClass * * CopyStartPositions(void *a1);
    TimerStruct * * Constructor(void *a1, void *a2, void *a3);
    static int Constructor(void *aP1);  // 0x6832C0 raw: int Constructor(ScenarioClass*) [overload: member ctor has arity 3]
    static char Construct(void *aP1, double a2);  // 0x686730 raw: char __usercall@<al>(ecx=this Source, st0=double)
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
    static char processAI();  // [w16g2] static (def body this=0)
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
    static char GetGlobalStateByID(ScenarioClass * aP1, unsigned int a2, unsigned __int8 *a3);  // G57w10-S raw 0x00689760 (was C2597 interim stub)
    static char GetLocalStateByID(ScenarioClass * aP1, unsigned int a2, unsigned __int8 *a3);  // G57w10-S raw 0x00689A00 (was C2597 interim stub)
    static unsigned int * Get_Waypoint_Location(ScenarioClass * aP1, unsigned int *a2, int a3);  // G57w10-S raw 0x0068BCC0 (was C2597 interim stub)
     char Load(int a2);  // G57w10-S raw 0x005AE100 (was C2597 interim stub)
     char SaveLoad_Prefix(int *dropshipUnitCounts);  // G57w10-S raw 0x00689310 (was C2597 interim stub)
    static void SaveLoad_Prefix_0(ScenarioClass * aP1, int a2);  // G57w10-S raw 0x00689470 (was C2597 interim stub)
    static int ShowMissionBriefing(ScenarioClass * aP1);  // G57w10-S raw 0x0065F520 (was C2597 interim stub)
    static double UpdateLighting(...);  // C2597 interim stub
    static int CheckExists(ScenarioClass * aP1, int a2);  // G57w10-S raw 0x0069AC30 (was C2597 interim stub)
    static wchar_t * InitTimer(ScenarioClass * aP1);  // G57w10-S raw 0x00683610 (was C2597 interim stub)
    int CalcMinShroudLevel();  // 0x588990
    int LoadNetworkConfig();  // 0x6980c0
    char SetGlobalToByID(unsigned int a2, char a3);  // 0x689670
    int SaveGameOptions();  // 0x5fad10
    int Is_Waypoint_Valid(unsigned int a2);  // 0x68bd80
    char Write_Waypoints(char *a2);  // 0x68be90
    char * SetFileName(char *Source); // N_fix R5 supply (cache truth)
    int LoadScenarioAndStart(char *Source, char a2, double a3, int aP1, void * a4);
    MSAnim * checkWinningConditions(unsigned int * Block, char a2);
};

} // namespace gamemd
