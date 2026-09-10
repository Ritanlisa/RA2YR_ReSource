// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct AbstractClass {
    void* vfptr;  // minimal E2 declaration
    int initVtableBase();  // 0x410100
    void DTOR();  // 0x4101F0
    int GetVtable3(AbstractClass * aP0);  // 0x410220
    int GenerateUniqueID(int a1);  // 0x410230
    int SaveLoad_Prefix(ObjectTypeClass * aP0, ObjectTypeClass * aP1, ObjectTypeClass * aP2);  // 0x410320
    int SaveLoad_Prefix_0(AbstractClass * aP0, AbstractClass * aP1);  // 0x410380
    int computeDistance();  // 0x410440
    int StubReturnFalse();  // 0x410470
    int COMStub_Return0_10();  // 0x410480
    int COMStub_Return0_20();  // 0x410520
    int COMStub_Return0_21();  // 0x410530
    int COMStub_Return0_23();  // 0x410570
    Surface * getObjectValue(char a2);  // 0x4115D0
    int GetField9();  // 0x417FD0
    unsigned int updateLayer();  // 0x425520
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
    int getMapCoords();  // 0x426A80
    std::locale::facet * setMapCoords(char a2);  // 0x427270
    void Initialize(TechnoClass * aP1, TechnoClass * aP2);  // 0x438E70
    int COMStub_Return0_190();  // 0x459DC0
    int COMStub_Return0_205();  // 0x459DE0
    int COMStub_Return0_270();  // 0x459E60
    bool addRef(unsigned short * a2, int a3);  // 0x464AC0
    int compareType(int a1);  // 0x487E50
    Blitter * getTileIndex(char a2);  // 0x499CC0
    BlitPlainXlat * setTileIndex(char a2);  // 0x499CE0
    BlitTransXlat * getOverlayType(char a2);  // 0x499D00
    std::locale::facet * setOverlayFlags(char a2);  // 0x499D20
    RLEBlitter * clearOverlayFlags(char a2);  // 0x499DA0
    int GetType();  // 0x4CA160
    unsigned int queueMission(int a2);  // 0x4E01C0
    GScreenClass * getHouseHandle(char a2);  // 0x4F4C00
    int checkPassability();  // 0x50E370
    int saveToStream(int a1, const void * a2, unsigned int * a3);  // 0x510A20
    int loadFromStream(int a1);  // 0x510A30
    int computeSize(int a1);  // 0x510A40
    int COMStub_6(TechnoTypeClass * aP0, int * a1, int aP2);  // 0x5439F0
    MissionClass * getWeaponRange(unsigned int * Block, char a2);  // 0x5B3A60
    char validatePathNode();  // 0x5C02E0
    unsigned int * checkVisibility(char a2);  // 0x5D7FD0
    unsigned int * updateVisibilityState(char a2);  // 0x5D8030
    unsigned int * processFogReveal(char a2);  // 0x5D8050
    unsigned int * checkShroudState(char a2);  // 0x5D8070
    unsigned int * updateShroudMap(char a2);  // 0x5D8090
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
    int SaveLoad_PrefixWrapper(TechnoTypeClass * aP0, ObjectTypeClass * aP1, TechnoTypeClass * aP2);  // 0x5F9950
    char processTeamOrder();  // 0x65C330
    int checkTeamObjective();  // 0x65C4A0
    void resetTeamState();  // 0x65C540
    FileClass * processAITrigger(unsigned int * Block, char a2);  // 0x65C610
    void ClearTargetToMeClearManagerTarget(int a1);  // 0x70D4A0
    void AnnounceExpiredPointer(AbstractClass * aP0, AbstractClass * aP1);  // 0x7258D0
    char Stub1INoticeSink(int a1, int a2);  // 0x410580
    void COM_Stub_Return0(int a1);  // 0x410590
    int COMStub_26();  // 0x4263A0
    int COMStub_107();  // 0x4264C0
    int COMStub_Return0_121();  // 0x426520
    int getAltitude();  // 0x426580
    char releaseRef();  // 0x465910
    char finalRelease();  // 0x465920
    void COMStub_Return0_69(Tactical * aP0, AbstractClass * aP1);  // 0x4DB250
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
    char processWeaponFire();  // 0x711E80
    int checkBuildingPlacement();  // 0x74F330
    int computeDistanceSquared();  // 0x410490
    int COMStub_Return0_15();  // 0x4104A0
    int COMStub_Return0_16();  // 0x4104B0
};
} // namespace gamemd
