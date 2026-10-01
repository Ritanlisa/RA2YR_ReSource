// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct TeamClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    bool IsAllocated;  // 0x19
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    void * NeedsSaveOrLink;  // 0x20
    TeamTypeClass* buildingType;  // 0x24
    ScriptClass* currentScript;  // 0x28
    bool q02B;  // 0x2B
    HouseClass* owner;  // 0x2C
    HouseClass* target;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    CellClass* spawnCell;  // 0x34
    unsigned int unknown38;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    AbstractClass* queuedFocus;  // 0x3C
    unsigned int q03D;  // 0x3D
    AbstractClass* focus;  // 0x40
    bool q042;  // 0x42
    unsigned int unknown44;  // 0x44
    unsigned char q045;  // 0x45
    void* q046;  // 0x46
    char totalObjects[4];  // 0x48
    bool q04A;  // 0x4A
    char totalThreatValue[4];  // 0x4C
    unsigned char q04F;  // 0x4F
    char creationFrame[4];  // 0x50
    FootClass* firstUnit;  // 0x54
    unsigned int ClosestMember;  // 0x56
    char guardAreaTimer[12];  // 0x58
    unsigned char q05C;  // 0x5C
    void * q060;  // 0x60
    char suspendTimer[12];  // 0x64
    int q068;  // 0x68
    void* q06C;  // 0x6C
    TagClass* tag;  // 0x70
    bool unknown74;  // 0x74
    bool unknown75;  // 0x75
    bool unknown76;  // 0x76
    bool unknown77;  // 0x77
    bool spawnStatus;  // 0x78
    bool unknown79;  // 0x79
    bool TeamClass_field_7A;  // 0x7A
    bool TeamClass_field_7B;  // 0x7B
    bool visibilityFlags;  // 0x7C
    bool needsToDisappear;  // 0x7D
    bool TeamClass_field_7E;  // 0x7E
    bool TeamClass_field_7F;  // 0x7F
    bool stepCompleted;  // 0x80
    bool unknown81;  // 0x81
    bool unknown82;  // 0x82
    bool isSuspended;  // 0x83
    bool achievedGreatSuccess;  // 0x84
    bool unknown85;  // 0x85
    bool unknown86;  // 0x86
    bool unknown87;  // 0x87
    char countObjects[24];  // 0x88
    void* q08C;  // 0x8C
    unsigned char q090;  // 0x90
    void * ptr_94;  // 0x94
    unsigned char u8_98;  // 0x98
    unsigned char u8_99;  // 0x99
    void* q09C;  // 0x9C
    unsigned int u32_10C;
    unsigned int u32_68F;
    unsigned int u32_690;
    unsigned int u32_691;
    unsigned int u32_A8;
    unsigned int u32_B0;
    unsigned int Debug;
    unsigned char *__pad_28;  // 0x28
// --- flat members (END) ---
    AbstractClass * * DestroyAllMembers(void * aP1);
    AbstractClass * * FindClosestEnemy(void * aP1, void * aP2);
    AbstractClass * * UpdateMembers();
    BOOL Check(void *a1 = 0, void *a2 = 0, void *a3 = 0);
    CampaignClass * * Cleanup(void * aP1);
    TeamClass * * ProcessScriptActions(unsigned int * a2, int a3);
    TeamTypeClass * * RecruitMember(int a2);
    TechnoClass * * RemoveAllMembers();
    bool ValidateMember(void * aP1, int * a2, char a4);
    char AddMember(void * aP1, void * aP2);
    char SelectMember(void * aP1);
    char SetField11(void * aP1);
    char WakeUpAllMembers();
    int CheckCohesion();
    int CountActiveTeamsForType(void * aP1);
    int DeployUnit(int a2, int a3);
    int DisbandTeam(int a2);
    int ExecuteAction(int a2, char a3);
    int FindByMemberType(int a2);
    int GetLeaderIndex();
    int GetMember();
    int HasAnyMemberFlagged();
    int LiberateMember_Start(IUnknown * aP1, unsigned int a3, AbstractClass * aP3);
    int PowerDrainUpdate(int * a2);
    int ProcessMemberPositions();
    int Reset(void * aP1);
    int SaveLoad_Prefix(void * aP0, int aP1);
    int SaveLoad_Prefix_0(void * aP0, int * a1, int aP2);
    int StubReturn160();
    int StubReturn34();
    int UpdateBuildQueue(void * aP1, void * aP2, void * aP3);
    int UpdateReadinessState();
    int Update_0(int aP1, void * aP2, void * aP3, void * aP4, void * aP5);
    int ddtor(int a1, unsigned int * a2);
    unsigned int * FindScriptAction(unsigned int * a2);
    unsigned int * GetNextScriptAction(unsigned int * a2);
    void * FindOrCreate(void *a1 = 0);
    void Destructor(void * a2);
    void MoveTeamToWaypoint(void * aP1, void * aP2);
    void Update(void * aP0, unsigned int * a1, int j, void *a2 = 0);
    void* AttackCoordinator();
    static double AddToBuildQueue(...);  // C2597 interim stub
    static double CreateOneOf(...);  // C2597 interim stub
};

} // namespace gamemd
