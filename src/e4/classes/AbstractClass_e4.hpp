// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MissionClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct IsometricTileClass;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct Surface;  // fix_fwd_type_supply
struct FileClass;  // fix_fwd_type_supply
struct Blitter;  // fix_fwd_type_supply
struct BlitPlainXlat;  // fix_fwd_type_supply
struct BlitTransXlat;  // fix_fwd_type_supply
struct RLEBlitter;  // fix_fwd_type_supply
#ifndef GAMEMD_TREE_UNIVERSE  // G57w8: tree TUs carry render/display.hpp GScreenClass (C2011 collision; e4 TUs keep this flat copy)
struct GScreenClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    ObjectClass * ptr_30;  // 0x30
    TechnoClass * ptr_24;  // 0x36
    CellClass * ptr_34;  // 0x52
    TimerStruct * ptr_5788;  // 0x5788
// --- flat members (END) ---
    void Initialize(TechnoClass * aP1, TechnoClass * aP2);
    unsigned int * checkVisibility(char a2);
    unsigned int * updateVisibilityState(char a2);
    unsigned int * processFogReveal(char a2);
    unsigned int * checkShroudState(char a2);
    unsigned int * updateShroudMap(char a2);
    void ClearTargetToMeClearManagerTarget(int a1);
    int initVtableBase();
    int DTOR(void *a1 = 0);
    static int GenerateUniqueID(int a1);
    static int SaveLoad_Prefix(ObjectTypeClass * aP0, ObjectTypeClass * aP1, ObjectTypeClass * aP2);
    static int SaveLoad_Prefix_0(AbstractClass * aP0, AbstractClass * aP1);
    int computeDistance();
    int StubReturnFalse();
    int COMStub_Return0_10();
    int COMStub_Return0_20();
    int COMStub_Return0_21();
    int COMStub_Return0_23();
    Surface * getObjectValue(char a2);
    int COMStub_Return0_25();
    int COMStub_Return0_32();
    int getCoordCenter();
    int COMStub_Return0_49();
    int COMStub_50();
    int COMStub_Return0_67();
    int COMStub_Return0_68();
    int COMStub_Return0_85();
    int COMStub_Return0_86();
    int COMStub_Return0_87();
    int COMStub_Return0_88();
    int COMStub_Return0_92();
    int COMStub_Return0_99();
    int COMStub_Return0_117();
    int COMStub_Return0_118();
    int COMStub_Return0_119();
    int getCoordCenter2();
    std::locale::facet * setMapCoords(char a2);
    int COMStub_Return0_190();
    int COMStub_Return0_205();
    int COMStub_Return0_270();
    Blitter * getTileIndex(char a2);
    BlitPlainXlat * setTileIndex(char a2);
    BlitTransXlat * getOverlayType(char a2);
    std::locale::facet * setOverlayFlags(char a2);
    RLEBlitter * clearOverlayFlags(char a2);
    unsigned int queueMission(int a2);
    GScreenClass * getHouseHandle(char a2);
    int saveToStream(int a1, const void * a2, unsigned int * a3);
    int loadFromStream(int a1);
    int computeSize(int a1);
    int COMStub_6(TechnoTypeClass * aP0, int * a1, int aP2);
    MissionClass * getWeaponRange(unsigned int * Block, char a2);
    char validatePathNode();
    unsigned int * processRevealArea(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6);
    unsigned int * computeRevealRadius(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6);
    unsigned int * applyRevealToCell(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6);
    unsigned int * checkRevealCell(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, int a5, int a6);
    int COMStub_Return0_37();
    int COMStub_Return0_38();
    int COMStub_Return0_39();
    int COMStub_Return0_40();
    int COMStub_Return0_56();
    int COMStub_Return0_57();
    int COMStub_Return0_63();
    int COMStub_Return0_71();
    int COMStub_Return0_72();
    int COMStub_81();
    int COMStub_80();
    int COMStub_Return0_82();
    int COMStub_89();
    int COMStub_Return0_93();
    int COMStub_Return0_104();
    int COMStub_Return0_105();
    static int SaveLoad_PrefixWrapper(TechnoTypeClass * aP0, ObjectTypeClass * aP1, TechnoTypeClass * aP2);
    int checkTeamObjective();
    FileClass * processAITrigger(unsigned int * Block, char a2);
    void* vfptr;  // 0x0 (G57W14E1 til supply)
    unsigned int *q000;  // 0x0 (offset-truth)
};
#endif  // G57w8 GScreenClass tree guard
  // G42.37 class-body supply (defs in AbstractClass_e4.cpp)
#ifndef GAMEMD_TREE_UNIVERSE
#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass 1
#endif
struct AbstractClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    ObjectClass* uniqueId;  // 0x10 [X30:type_map]
    unsigned int q011;  // 0x11
    ObjectClass* q010;  // 0x10 [X30:type_map]
    int u32_3;  // 0x3
    bool IsAllocated;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned char u8_15;  // 0x15
    unsigned int nextArrayIndex;  // 0x18
    unsigned char u8_1A;  // 0x1A
    int referenceCount;  // 0x1C
    unsigned char needsSave;  // 0x20
    unsigned int alignmentPadding;  // 0x21
    unsigned int AirstrikeClass_field_50;
    unsigned int AirstrikeClass_field_54;
    unsigned int AirstrikeClass_field_58;
    unsigned int AirstrikeClass_field_5C;
    unsigned int AlphaShapeClass_field_0x04;
    unsigned int AlphaShapeClass_field_0x08;
    unsigned int AlphaShapeClass_field_0x0C;
    unsigned int AlphaShapeClass_field_0x24;
    unsigned int AnimClass_field_0x0;
    unsigned int AnimClass_field_0x1A0;
    unsigned int AnimClass_field_0x1B4;
    unsigned int AnimClass_field_0x4;
    unsigned int AnimClass_field_0x8;
    unsigned int AnimClass_field_0x9C;
    unsigned int AnimClass_field_0xA4;
    unsigned int AnimClass_field_0xC8;
    unsigned int AnimClass_field_0xCC;
    unsigned int Dirty;
    unsigned int LightSource;
    unsigned int RadLevelTimer;
    unsigned int RadLightTimer;
    unsigned int RefCount;
    unsigned int *__pad_0;
    unsigned int *__pad_A0;
    unsigned int *__pad_C;
    unsigned int buildingType;
    unsigned int firstTrigger;
    unsigned int house;
    unsigned int nextTrigger;
    unsigned int owner;
    unsigned int parent_gap;
    unsigned int q028;
    unsigned int q034;
    unsigned int u32_1C;
    unsigned int u32_24;
    unsigned int u32_2C;
    unsigned int vtable0;
    unsigned int *__pad_28;
    unsigned int creationFrame;
    unsigned int TEventClass_field_28;
    unsigned int TEventClass_field_30;
    unsigned int TEventClass_field_54;
    unsigned int SpawnManagerClass_field_58;
    unsigned int SpawnManagerClass_field_5C;
    unsigned int spawns;
    unsigned int *__pad_48;
    unsigned int spawnVectorCount;
unsigned int DiskLaserClass_field_0x28;  // 0x28 [X35-L7 kind=unsigned int]
    void* q090;  // 0x90 [X30:type_map]
    unsigned int q300;  // 0x300
    unsigned char __pad_F70[1453];  // 0xF70
    unsigned char __pad_1714[126];  // 0x1714
    unsigned int q008;  // 0x8
    unsigned int q098;  // 0x98
    unsigned int q0A0;  // 0xA0
    unsigned int NeedsSaveOrLink;

    unsigned int SuperClass_field_0x2C;  // 0x2C
    unsigned char __pad_3C[17];  // 0x3C
    unsigned int SuperClass_field_0x68;  // 0x68


    unsigned int QueryInterface;
    void* Buildup;  // 0x0 (no offset truth)
    void* BuildupLoaded;  // 0x0 (no offset truth)
    void* BlitterCore;  // 0x0 (no offset truth)
    void* RLEBlitterCore;  // 0x0 (no offset truth)
// --- flat members (END) ---
    void Initialize(TechnoClass * aP1, TechnoClass * aP2);  // 0x438E70
    unsigned int *  checkVisibility(char a2);  // 0x5D7FD0
    unsigned int *  updateVisibilityState(char a2);  // 0x5D8030
    unsigned int *  processFogReveal(char a2);  // 0x5D8050
    unsigned int *  checkShroudState(char a2);  // 0x5D8070
    unsigned int *  updateShroudMap(char a2);  // 0x5D8090
    void  ClearTargetToMeClearManagerTarget(int a1);  // 0x70D4A0
    static void AnnounceExpiredPointer(AbstractClass *a1, int a2);
    int getMapCoords();  // 0x426A80
int DTOR(); // 0x4101F0
    MissionClass *  getWeaponRange(char a2);  // 0x5B3A60
    DynamicVector *  resetScriptState(unsigned int * Block, char a2);  // 0x4CABA0
    void getMissionState();  // 0x4D2930
    unsigned int  setMissionState(int a2);  // 0x4D2960
    void updateMission();  // 0x4E0190
    DynamicVector *  processMissionQueue(unsigned int * Block, char a2);  // 0x4E0270
    char  completeMission(int a2, unsigned int * a3);  // 0x4E04A0
    AbstractClass *  getMovementSpeed(char a2);  // 0x50E380
    void getTargetCoordinates();  // 0x50E5D0
    unsigned int  setTargetCoordinates(int a2);  // 0x50E600
    char  evaluateTarget(int a2, char * a3);  // 0x50F3A0
    int  selectBestTarget(int a2);  // 0x50F4A0
    DynamicVector *  updateThreatMap(unsigned int * Block, char a2);  // 0x510220
    char  ModifyCellTiles(int a2);  // 0x543330
    int  COMStub_5(unsigned int * a2, int a3);  // 0x543990
    int  COMStub_54(int a2, int a3);  // 0x543A10
    char COMStub_53();  // 0x543A40
    IsometricTileClass *  CreateInstance(char a2, void *a1 = 0, void *a3 = 0);  // 0x543B10
    void  processStateTransition(int a2);  // 0x54E590
    int  COMStub_125(int a2, int a3, int a4);  // 0x5B3650
    char COMStub_126();  // 0x5B36B0
    int  COMStub_13(int a2);  // 0x5B3970
    void*  getWeaponSpeed(char a2);  // 0x5B46E0
    void  checkLOS(char a2);  // 0x5C0280
    char computePathCost();  // 0x5C02C0
    char processPathNode();  // 0x5C02F0
    int  computePathDistance(int a2, int a3);  // 0x5C0340
    int  checkPathEnd(int a2);  // 0x5C0380
    void  finalizePath(signed int a2);  // 0x5C03A0
    void*  processCombatState(char a2);  // 0x5C09B0
    char  checkCombatFlags(int a2, unsigned int * a3);  // 0x5C0B10
    void processDamageEvent();  // 0x5C0BC0
    int  applyDamageEffects(unsigned int * a2);  // 0x5C0BF0
    unsigned int  checkDamageThreshold(int a2);  // 0x5C0C30
    VectorClass_flat *  processDeathEvent(unsigned int * Block, char a2);  // 0x5C0D30
    unsigned int *  updateAnimationState(int a2, int a3);  // 0x5C5A30
    int IsNotNull();  // 0x5F5930
    int COMStub_79();  // 0x5F6C70
    void ProcessData(unsigned int * a2, int16_t * a3);  // 0x6293E0
    DynamicVector *  getTeamIndex(unsigned int * Block, char a2);  // 0x645B10
    int checkTeamMembership();  // 0x65C2E0
    int  dispatchTeamEvent(int a2, int a3);  // 0x65C340
    size_t  validateTeamConfig(void * Src, signed int Size);  // 0x65C4B0
    int *  checkAICondition(char a2);  // 0x65D4D0
    int updateAITimer(void *a1 = 0);  // 0x68BCB0
    char  getAIPriority(int a2, unsigned int * a3);  // 0x6B14B0
    void setAIPriority();  // 0x6B1560
    int  evaluateAIOption(unsigned int * a2);  // 0x6B1590
    unsigned int  selectAIAction(int a2);  // 0x6B15D0
    VectorClass_flat *  checkAIResources(unsigned int * Block, char a2);  // 0x6B1930
    char  allocatePathMemory(int a2, unsigned int * a3);  // 0x6B8260
    void freePathMemory();  // 0x6B8310
    int  initPathState(unsigned int * a2);  // 0x6B8340
    unsigned int  resetPathMemory(int a2);  // 0x6B8380
    VectorClass_flat *  validatePathMemory(unsigned int * Block, char a2);  // 0x6B8740
    int GetTotalValue();  // 0x6C9600
    int  getTotalValue(int a2);  // 0x6C9D30
    int  checkWeaponCooldown(int a2);  // 0x71FFE0
    char  getCurrentWeapon(int a2, char a3);  // 0x720020
    char selectWeapon();  // 0x720070
    int *  fireWeapon(int a2);  // 0x720140
    int  reloadWeapon(int a2);  // 0x720200
    unsigned int *  checkAmmunition(char a2);  // 0x720210
    void processRadarEvent();  // 0x733160
    static void  updateBuildingState(signed int a2);  // 0x7598D0
    char processConstruction();  // 0x759E10
    void checkBuildProgress();  // 0x759E50
    int finalizeConstruction();  // 0x759E80
    int ProcessInit();  // 0x75D230
    void checkSuperWeaponStatus();  // 0x763EF0
    unsigned int  updateSuperWeaponTimer(int a2);  // 0x763F30
    unsigned int *  fireSuperWeapon(unsigned int * a2, int a3);  // 0x763F60
    DynamicVector *  checkSWTarget(unsigned int * Block, char a2);  // 0x763FF0
    VectorClass_flat *  getSWChargeState(unsigned int * Block, char a2);  // 0x764050
    char  setSWCharge(int a2);  // 0x7640B0
    char  resetSWCharge(int a2, int * a3);  // 0x764110
    void processSpecialAbility();  // 0x764220
    int  checkSpecialCooldown(unsigned int * a2);  // 0x764260
    unsigned int  updateSpecialTimer(int a2);  // 0x7642B0
    char  AllocateCoordArray(int a2, int * a3);  // 0x7642E0
    int  processSpecialEffect(unsigned int * a2);  // 0x764420
    static int finalizeDestruction(void *a1 = 0);  // 0x7C35C0
    ObjectClass *  Render_Render_660730(unsigned int * a2);  // 0x660730
    Surface *  getObjectValue(char a2);  // 0x4115D0
    Blitter *  getTileIndex(char a2);  // 0x499CC0
    BlitPlainXlat *  setTileIndex(char a2);  // 0x499CE0
    BlitTransXlat *  getOverlayType(char a2);  // 0x499D00
    RLEBlitter *  clearOverlayFlags(char a2);  // 0x499DA0
    GScreenClass *  getHouseHandle(char a2);  // 0x4F4C00
    FileClass *  processAITrigger(char a2);  // 0x65C610
    int SaveLoad_Prefix_0(AbstractClass * aP0, AbstractClass * aP1);  // 0x410380
    unsigned int updateLayer();  // 0x425520
    int GetType();  // 0x4CA160
    int checkPassability();  // 0x50E370
    void resetTeamState();  // 0x65C540
    unsigned int *  Copy8Bytes(unsigned int * a1, int * a2);  // 0x72A9C0
    int initVtableBase();  // 0x410100
    static int GetVtable3(AbstractClass * aP0);  // 0x410220
    int GenerateUniqueID(int a1);  // 0x410230
    int SaveLoad_Prefix(ObjectTypeClass * aP0, ObjectTypeClass * aP0_2, ObjectTypeClass * aP2);  // 0x410320
    int computeDistance();  // 0x410440
    int StubReturnFalse();  // 0x410470
    int COMStub_Return0_10();  // 0x410480
    int COMStub_Return0_20();  // 0x410520
    int COMStub_Return0_21();  // 0x410530
    int COMStub_Return0_23();  // 0x410570
    int GetField9();  // 0x417FD0
    int COMStub_Return0_25();  // 0x426390
    int COMStub_Return0_32();  // 0x4263B0
    int COMStub_Ret8487648_36();  // 0x4263C0
    int getCoordCenter();  // 0x426410
    int COMStub_Return0_49();  // 0x426420
    int COMStub_50();  // 0x426430
    int COMStub_Return0_67();  // 0x426440
    int COMStub_Return0_68();  // 0x426450
    int COMStub_Return0_85();  // 0x426460
    int COMStub_Return0_86();  // 0x426470
    int COMStub_Return0_87();  // 0x426480
    int COMStub_Return0_88();  // 0x426490
    int COMStub_Return0_92();  // 0x4264A0
    int COMStub_Return0_99();  // 0x4264B0
    int COMStub_Return0_117();  // 0x4264E0
    int COMStub_Return0_118();  // 0x4264F0
    int COMStub_Return0_119();  // 0x426500
    int getCoordCenter2();  // 0x426510
    std::locale::facet *  setMapCoords(char a2);  // 0x427270
    int COMStub_Return0_190();  // 0x459DC0
    int COMStub_Return0_205();  // 0x459DE0
    int COMStub_Return0_270();  // 0x459E60
    std::locale::facet *  setOverlayFlags(char a2);  // 0x499D20
    unsigned int  queueMission(int a2);  // 0x4E01C0
    int saveToStream(int a1, const void * a2, unsigned int * a3);  // 0x510A20
    int  loadFromStream(int a1);  // 0x510A30
    int  computeSize(int a1);  // 0x510A40
    int  COMStub_6(int * a2, int a3);  // 0x5439F0
    char validatePathNode();  // 0x5C02E0
    unsigned int * processRevealArea(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6);  // 0x5D81F0
    unsigned int * computeRevealRadius(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6);  // 0x5D8230
    unsigned int * applyRevealToCell(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6);  // 0x5D8270
    unsigned int * checkRevealCell(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, int a5, int a6);  // 0x5D82B0
    int COMStub_Return0_37();  // 0x5F42B0
    int COMStub_Return0_38();  // 0x5F42C0
    int COMStub_Return0_39();  // 0x5F42D0
    int COMStub_Return0_40();  // 0x5F42E0
    int COMStub_Return0_56();  // 0x5F42F0
    int COMStub_Return0_57();  // 0x5F4300
    int COMStub_Return0_63();  // 0x5F4310
    int COMStub_Return0_71();  // 0x5F4330
    int COMStub_Return0_72();  // 0x5F4340
    int COMStub_81();  // 0x5F4350
    int COMStub_80();  // 0x5F4360
    int COMStub_Return0_82();  // 0x5F4370
    int COMStub_89();  // 0x5F4380
    int COMStub_Return0_93();  // 0x5F43A0
    int COMStub_Return0_104();  // 0x5F4400
    int COMStub_Return0_105();  // 0x5F6B50
    static int  SaveLoad_PrefixWrapper(int a2, int a3);  // 0x5F9950
    char processTeamOrder();  // 0x65C330
    int checkTeamObjective();  // 0x65C4A0
    int compareType(int a1);  // 0x487E50
    char  Stub1INoticeSink(int a1, int a2);  // 0x410580
    void  COM_Stub_Return0(int a1);  // 0x410590
    int COMStub_26();  // 0x4263A0
    int COMStub_107();  // 0x4264C0
    int COMStub_Return0_121();  // 0x426520
    int getAltitude();  // 0x426580
    char releaseRef();  // 0x465910
    char finalRelease();  // 0x465920
    void  COMStub_Return0_69(int a2);  // 0x4DB250
    int COMStub_Return0_34();  // 0x4E0130
    char getCurrentMission();  // 0x4E0140
    int computeMovementCost();  // 0x50E360
    int COMStub_Ret176_12();  // 0x543A90
    int COMStub_Ret17_11();  // 0x543AA0
    int COMStub_Ret450_134();  // 0x5B2E60
    int COMStub_Ret450_138();  // 0x5B2EA0
    int COMStub_Ret450_139();  // 0x5B2EB0
    int COMStub_Ret450_140();  // 0x5B2EC0
    int COMStub_Ret450_144();  // 0x5B2F00
    int COMStub_Ret450_150();  // 0x5B2F60
    int COMStub_Ret450_151();  // 0x5B2F70
    int resetPathState();  // 0x5C03C0
    char COMStub_Return0_7();  // 0x5CEB40
    int COMStub_29();  // 0x5F4240
    int COMStub_28();  // 0x5F4250
    int COMStub_Ret2147483647_35();  // 0x5F42A0
    int COMStub_64();  // 0x5F4320
    int COMStub_90();  // 0x5F4390
    int COMStub_Return0_96();  // 0x5F43D0
    int processStateUpdate();  // 0x5F43E0
    int COMStub_Return0_33();  // 0x5F6BC0
    char updateTeamState();  // 0x65C320
    int updateTargetTracking(int a1);  // 0x6CE1F0
    static char processWeaponFire();  // 0x711E80
    int checkBuildingPlacement();  // 0x74F330
    int computeDistanceSquared();  // 0x410490
    int COMStub_Return0_15();  // 0x4104A0
    int COMStub_Return0_16();  // 0x4104B0
     AbstractClass * Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    static unsigned int * InitVtables(AbstractClass * aP1, int a2);
    static void * IsTechnoType(AbstractClass * aP1);
    int  processDetection(int a2);  // 0x439150
    int COMStub_Release(void *a1 = 0);
    int COMStub_AddRef(void *a1 = 0);
    int ProcessPower(void *a1 = 0, void *a2 = 0);
    int AbstractClass_COMStub_133();
    int AbstractClass_COMStub_137();
    AbstractClass * * AnnounceExpiredPointer(AbstractClass *a1, int a2, int aP0, int aP1, int aP2);
    int DTOR(void *a1_1);
    int COMStub_Return0_38(void *a1_1);
    unsigned int q_4B;  // +0x4B flat supply (final pass)
    unsigned int q_5C1C;  // +0x5C1C flat supply (final pass)
    int  sub_5D9060(int a2);  // 0x5D9060
    BOOL sub_7325C0();
    static int IsTechno(AbstractClass *p_this);  // x4:ida@0x40dd20

    uint16_t u16_A2;  // X10 supply (member_lookup)
    unsigned int u32_58;  // X10 supply (member_lookup)
    char u8_C8;  // X10 supply (member_lookup)
    unsigned int u32_1791;  // 0x1791
    void* u32_B0;  // 0xB0 [X30:type_map]
    unsigned int u32_44;  // 0x44
    void* q040;  // 0x40 [X30:type_map]
unsigned int u32_38;  // 0x38 [X35-L7 kind=unsigned int]
    int AbstractClass_1;  // 0x1 [X30:type_map]
    unsigned int BibShape;  // [X30:default]
    unsigned int BibShapeLoaded;  // [X30:default]
    unsigned int DeployingAnimLoaded_d;  // [X30:default]
    unsigned int DeployingAnim_2;  // [X30:default]
    unsigned int DockingOffsets;  // [X30:default]
    unsigned int IsInitialized;  // [X30:default]
    unsigned int Items;  // [X30:default]
    unsigned int PreventsPlacementOverlap;  // [X30:default]
    unsigned int ProductionCompletionThreshold;  // [X30:default]
    unsigned int RoofDeployingAnim;  // [X30:default]
    unsigned int RoofDeployingAnimLoaded;  // [X30:default]
    unsigned int RubbleLoaded_d;  // [X30:default]
    unsigned int Rubble_d;  // [X30:default]
    unsigned int UnderDoorAnimLoaded_d;  // [X30:default]
    unsigned int UnderDoorAnim_d;  // [X30:default]
    unsigned int UnderRoofDoorAnim;  // [X30:default]
    unsigned int UnderRoofDoorAnimLoaded;  // [X30:default]
    unsigned int numberStartingPoints;  // [X30:default]
    int ptr_2;  // 0x2 [X30:type_map]
    void* ptr_30;  // 0x30 [X30:type_map]
unsigned int q024;  // 0x24 [X35-L7 kind=unsigned int]
    int q02C;  // 0x2C [X30:type_map]
    unsigned int vfptr;  // [X30:default]
    unsigned int vfptr1;  // [X30:default]
    unsigned int vfptr2;  // [X30:default]
    unsigned int vfptr3;  // [X30:default]
};
#endif // GAMEMD_TREE_UNIVERSE
} // namespace gamemd
