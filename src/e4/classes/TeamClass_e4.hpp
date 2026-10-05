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
    unsigned int q011;  // 0x11
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    bool IsAllocated;  // 0x19
    int referenceCount;  // 0x1C
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
    AbstractClass* queuedFocus;  // 0x3C
    AbstractClass* focus;  // 0x40
    unsigned int unknown44;  // 0x44
    char totalObjects[4];  // 0x48
    char totalThreatValue[4];  // 0x4C
    char creationFrame[4];  // 0x50
    FootClass* firstUnit;  // 0x54
    char guardAreaTimer[12];  // 0x58
    unsigned char q05C;  // 0x5C
    void * q060;  // 0x60
    char suspendTimer[12];  // 0x64
    int q068;  // 0x68
    void* q06C;  // 0x6C
    TagClass* tag;  // 0x70
    bool unknown74;  // 0x74
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
    char countObjects[24];  // 0x88
    void* q08C;  // 0x8C
    unsigned char q090;  // 0x90
    unsigned int u32_10C;
    unsigned int u32_68F;
    unsigned int u32_690;
    unsigned int u32_691;
    unsigned int u32_B0;
    unsigned int Debug;
    unsigned char *__pad_28;  // 0x28
// --- flat members (END) ---
    AbstractClass * * DestroyAllMembers(unsigned int *p_vtable0);
    AbstractClass * * FindClosestEnemy(AbstractClass * aP1, AbstractClass * aP2);
    AbstractClass * * UpdateMembers();
    BOOL Check(void *a1, void *a2, void *a3);
    CampaignClass * * Cleanup(int aP1);
    TeamClass * * ProcessScriptActions(unsigned int * a2, int a3);
    TeamTypeClass * * RecruitMember(int a2);
    TechnoClass * * RemoveAllMembers();
    bool ValidateMember(TechnoClass * aP1, int * a2, char a4);
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
    int GetLeaderIndex();
    int GetMember(void *a1, void *a2);
    int HasAnyMemberFlagged();
    int LiberateMember_Start(int aP1, unsigned int a3, char aP3);
    int PowerDrainUpdate(int * a2);
    int ProcessMemberPositions();
    int Reset(char aP1);
    int SaveLoad_Prefix(AbstractClass * aP0, int aP1);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn160();
    int StubReturn34();
    int UpdateBuildQueue(AbstractClass * aP1, TechnoClass * aP2, TechnoClass * aP3);
    int UpdateReadinessState();
    int Update_0(int aP1, int aP2, int aP3, char aP4, int aP5);
    int ddtor(int a1, unsigned int * a2);
    unsigned int * FindScriptAction(unsigned int * a2);
    unsigned int * GetNextScriptAction(unsigned int * a2);
    void * FindOrCreate();
    void Destructor(void * a2);
    void MoveTeamToWaypoint(ScriptClass * aP1, TeamClass * aP2);
    void Update(int a2);
    void* AttackCoordinator();
    static double AddToBuildQueue(...);  // C2597 interim stub
    static double CreateOneOf(...);  // C2597 interim stub
    AbstractClass * * DestroyAllMembers(unsigned int *p_vtable0, int aP1, int a2, int a1);
    void Update(TechnoClass * aP0, unsigned int * a1, int j, void *a4);
    static int LiberateMember_Start(void * aP1, int aP2, int aP3);  // G42.39a static-call supply
};

} // namespace gamemd
