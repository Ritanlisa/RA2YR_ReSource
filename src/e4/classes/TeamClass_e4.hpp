// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct FootClass;  // G42.39a tree-TU fwd
struct TeamTypeClass;  // fix_fwd_type_supply
struct ScriptClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct CellClass;  // fix_fwd_type_supply
struct TagClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply

struct TeamClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    bool IsAllocated;  // 0x19
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    TeamTypeClass* buildingType;  // 0x24
    ScriptClass* currentScript;  // 0x28
    HouseClass* owner;  // 0x2C
    HouseClass* target;  // 0x30
    unsigned int alignmentPadding;  // 0x33
    CellClass* spawnCell;  // 0x34
    unsigned int unknown38;  // 0x38
    AbstractClass* queuedFocus;  // 0x3C
    AbstractClass* focus;  // 0x40
    char unknown44[4];  // 0x44
    char totalObjects[4];  // 0x48
    char totalThreatValue[4];  // 0x4C
    char creationFrame[4];  // 0x50
    FootClass* firstUnit;  // 0x54
    unsigned int ClosestMember;  // 0x56
    char guardAreaTimer[12];  // 0x58
    char suspendTimer[12];  // 0x64
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
    VectorClass * ptr_94;  // 0x94
// --- flat members (END) ---
    static int SumMemberCounts(void *aP1);
    AbstractClass * * DestroyAllMembers(unsigned int *p_vtable0);
    AbstractClass * * FindClosestEnemy(AbstractClass * aP1, AbstractClass * aP2);
    AbstractClass * * UpdateMembers();
    BOOL Check(void *a1, void *a2, void *a3);
    CampaignClass * * Cleanup(int aP1, void *a1 = 0);
    TeamClass * * ProcessScriptActions(unsigned int * a2, int a3);
    TeamTypeClass * * RecruitMember(int a2);
    TechnoClass * * RemoveAllMembers();
    bool ValidateMember(int aP1, int *a2, char a4);
    char AddMember(int aP1, char aP2);
    char SelectMember(AbstractClass * aP1, void *a2);
    char SetField11(ScriptClass * aP1);
    char WakeUpAllMembers();
    int CheckCohesion();
    int CountActiveTeamsForType(ObjectClass * aP1);
    int DeployUnit(int a2, int a3);
    int DisbandTeam(int a2);
    int ExecuteAction(int a2, char a3);
    int FindByMemberType(int a2);
    int GetLeaderIndex(void *a1 = 0);
    int GetMember(void *a1, void *a2);
    int HasAnyMemberFlagged();
    int LiberateMember_Start(int aP1, unsigned int a3, char aP3);
    int PowerDrainUpdate(int * a2);
    int ProcessMemberPositions();
    int Reset(char aP1, void *a1 = 0);
    int SaveLoad_Prefix(AbstractClass * aP0, int aP1);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn160();
    int StubReturn34();
    int UpdateBuildQueue(AbstractClass * aP1, TechnoClass * aP2, TechnoClass * aP3);
    int UpdateReadinessState();
    static int Update_0(TeamClass *aP0, int aP1, int aP2, int aP3, char aP4, int aP5);
    int ddtor(int a1, unsigned int * a2);
    unsigned int * FindScriptAction(unsigned int * a2);
    unsigned int * GetNextScriptAction(unsigned int * a2);
    void * FindOrCreate(void *a1 = 0);
    void Destructor(void * a2);
    void MoveTeamToWaypoint(ScriptClass * aP1, TeamClass * aP2);
    void Update(int a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);
    void* AttackCoordinator();
    static int AddToBuildQueue(TeamClass * aP1);
    static int CreateOneOf(TeamClass * aP1, TeamClass *a2);
    AbstractClass * * DestroyAllMembers(unsigned int *p_vtable0, int aP1, int a2, int a1);
    void Update(TechnoClass * aP0, unsigned int * a1, int j, void *a4);
    static int LiberateMember_Start(void * aP1, int aP2, int aP3);  // G42.39a static-call supply
    unsigned int u32_10C;  // 0x10C (offset-truth)
    unsigned char u32_68F;  // 0x68F (offset-truth)
    unsigned int u32_690;  // 0x690 (offset-truth)
    unsigned char u32_691;  // 0x691 (offset-truth)
    unsigned int u32_A8;  // 0xA8 (offset-truth)
    unsigned int u32_B0;  // 0xB0 (offset-truth)
    unsigned int u32_B4;  // 0xB4 (offset-truth)
    static double AbstractClass(...);  // plateau: C2039/C3861 stub
    static double u32_114(...);  // plateau: C2039/C3861 stub
    static double u32_118(...);  // plateau: C2039/C3861 stub
    static double u32_13C(...);  // plateau: C2039/C3861 stub
    static double u32_AC(...);  // plateau: C2039/C3861 stub
    static double u32_F4(...);  // plateau: C2039/C3861 stub
    static double v4(...);  // plateau: C2039/C3861 stub
    static double vfptr(...);  // plateau: C2039/C3861 stub
    static double vfptr1(...);  // plateau: C2039/C3861 stub
    static double vfptr2(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
