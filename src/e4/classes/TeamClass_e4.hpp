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
    int vfptr;  // 0x0
    int vfptr1;  // 0x4
    int vfptr2;  // 0x8
    unsigned char vfptr3;  // 0xC
    char __pad_D[3];  // 0xD
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    unsigned char referenceCount;  // 0x1C
    char __pad_1D[3];  // 0x1D
    void * NeedsSaveOrLink;  // 0x20
    void * buildingType;  // 0x24
    void * currentScript;  // 0x28
    void * owner;  // 0x2C
    void * target;  // 0x30
    unsigned char spawnCell;  // 0x34
    unsigned char q035;  // 0x35
    char __pad_36[2];  // 0x36
    int unknown38;  // 0x38
    void * queuedFocus;  // 0x3C
    void * focus;  // 0x40
    int unknown44;  // 0x44
    int totalObjects;  // 0x48
    int totalThreatValue;  // 0x4C
    int creationFrame;  // 0x50
    void * firstUnit;  // 0x54
    int guardAreaTimer[3];  // 0x58
    int suspendTimer[3];  // 0x64
    void * tag;  // 0x70
    char unknown74[1];  // 0x74
    bool unknown75;  // 0x75
    unsigned char unknown76;  // 0x76
    unsigned char unknown77;  // 0x77
    char spawnStatus;  // 0x78
    unsigned char unknown79;  // 0x79
    bool TeamClass_field_7A;  // 0x7A
    bool TeamClass_field_7B;  // 0x7B
    char visibilityFlags;  // 0x7C
    char needsToDisappear;  // 0x7D
    bool TeamClass_field_7E;  // 0x7E
    char TeamClass_field_7F[1];  // 0x7F
    char stepCompleted[1];  // 0x80
    bool unknown81;  // 0x81
    unsigned char unknown82;  // 0x82
    char isSuspended;  // 0x83
    char achievedGreatSuccess[1];  // 0x84
    bool unknown85;  // 0x85
    bool unknown86;  // 0x86
    bool unknown87;  // 0x87
    int countObjects[6];  // 0x88
    char __pad_A0[4];  // 0xA0
    unsigned char q0A4;  // 0xA4
    char __pad_A5[3];  // 0xA5
    unsigned int u32_A8;  // 0xA8
    unsigned int u32_AC;  // 0xAC
    unsigned int u32_B0;  // 0xB0
    unsigned int u32_B4;  // 0xB4
    unsigned int q0B8;  // 0xB8
    char __pad_BC[8];  // 0xBC
    unsigned int u32_C4;  // 0xC4
    unsigned int q0C8;  // 0xC8
    char __pad_CC[16];  // 0xCC
    unsigned int q0DC;  // 0xDC
    char __pad_E0[20];  // 0xE0
    unsigned int u32_F4;  // 0xF4
    char __pad_F8[20];  // 0xF8
    unsigned int q10C;  // 0x10C
    unsigned int q110;  // 0x110
    unsigned int u32_114;  // 0x114
    unsigned int u32_118;  // 0x118
    char __pad_11C[32];  // 0x11C
    unsigned int u32_13C;  // 0x13C
    char __pad_140[220];  // 0x140
    unsigned int q21C;  // 0x21C
    char __pad_220[896];  // 0x220
    unsigned int q5A0;  // 0x5A0
    char __pad_5A4[235];  // 0x5A4
    unsigned char u32_68F;  // 0x68F
    unsigned char u32_690;  // 0x690
    unsigned char u32_691;  // 0x691
    char __pad_692[2];  // 0x692
// --- flat members (BEGIN) ---
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
// --- flat members (END) ---
    static int SumMemberCounts(void *aP1);
    AbstractClass * * DestroyAllMembers(unsigned int *p_vtable0);
    AbstractClass * * FindClosestEnemy(AbstractClass * aP1, AbstractClass * aP2);
    AbstractClass * * UpdateMembers();
    BOOL Check(void *a1, void *a2, void *a3);
    CampaignClass * * Cleanup(int aP1, void *a2 = 0);
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
    int Reset(char aP1, void *a2 = 0);
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
    void* AttackCoordinator();
    static int AddToBuildQueue(TeamClass * aP1);
    static int CreateOneOf(TeamClass * aP1, TeamClass *a2);
    AbstractClass * * DestroyAllMembers(unsigned int *p_vtable0, int aP1, int a2, int a1);
    void Update(TechnoClass * aP0, unsigned int * a1, int j, void *a4);
};

} // namespace gamemd
