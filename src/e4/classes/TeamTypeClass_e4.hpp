// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct TeamTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
int TeamTypeClass_field_24;  // 0x24 [X35-L7 kind=int]
    unsigned char TeamTypeClass_field_28;  // 0x28
    unsigned char pad_29;  // 0x29
    char TeamTypeClass_field_2C[4];  // 0x2C
    char TeamTypeClass_field_30[4];  // 0x30
    unsigned int alignmentPadding;  // 0x33
    int TeamTypeClass_field_34;  // 0x34 [X30:type_map]
int TeamTypeClass_field_38;  // 0x38 [X35-L7 kind=int]
    char TeamTypeClass_field_3C[4];  // 0x3C
    unsigned int UINameLabel;  // 0x3D
    unsigned int taskForce;  // 0x40
int taskForceCount;  // 0x44 [X35-L7 kind=int]
int taskForceCapacity;  // 0x48 [X35-L7 kind=int]
int TeamTypeClass_field_58;  // 0x58 [X35-L7 kind=int]
    unsigned char TeamTypeClass_field_5C;  // 0x5C
    unsigned char TeamTypeClass_field_5D;  // 0x5D
    unsigned char pad_5E;  // 0x5E
    int TeamTypeClass_field_64;  // 0x64 [X30:type_map]
int TeamTypeClass_field_68;  // 0x68 [X35-L7 kind=int]
    char TeamTypeClass_field_6C[4];  // 0x6C
    unsigned char TeamTypeClass_field_70;  // 0x70
    unsigned char TeamTypeClass_field_71;  // 0x71
    unsigned char pad_72;  // 0x72
// --- flat members (END) ---
    unsigned int * FindOrCreateTaskForce(char *Source);  // G42.35f: ida truth 0x6E85F0 int* return
    AbstractClass * * GetMaxCount(CCINIClass * aP1);
    char LoadFromINI(void *a1 = 0, void *a2 = 0);
    TeamTypeClass * ReadScriptData(char * a1, int a2);
    TeamTypeClass * ddtor(char a2);
    int Check(int a2, void *a2_2, void *a3);
    int Construct(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    int DestroyAllInstances();
    int FindByName(void *a1 = 0);
    int FindFirstInstance();
    int FlashAllInstances(AnimClass * aP1);
    int GetAuxField();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetGroup();
    int GetObjectSize();
    int GetTeam(int a2, int a3);
    int GetTypeIdentifier();
    int LoadTypeData(AbstractTypeClass * aP0, int aP1);
    int PowerDrainUpdate(int * a2);
    int ProcessTaskForce(void *a1 = 0);
    int SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2);
    unsigned int * GetTransportWaypoint(unsigned int * a2);
    unsigned int * CreateScriptType(char *Source);  // G42.35f: ida truth 0x691C00 int* return
    void * CreateScriptType(char *Source, int a2, int a3, int aP1);
    AbstractClass * * FindOrCreateTaskForce(char *Source, int a2, int a3, int aP1);
    AbstractClass * * LoadFromINI(unsigned char *** aP1, void *a2, void * aTaskforce, void * aWaypoint);
    AbstractClass * * GetMaxCount(CCINIClass * aP1, void * aTaskforce, void * aWaypoint);
    unsigned char u32_A5;  // 0xA5 (offset-truth)
    unsigned char u32_A6;  // 0xA6 (offset-truth)
    unsigned char u32_A7;  // 0xA7 (offset-truth)
    unsigned char u32_A9;  // 0xA9 (offset-truth)
    unsigned char u32_AA;  // 0xAA (offset-truth)
    void *qC8;  // 0xC8 (offset-truth)
    unsigned int u32_E4;  // 0xE4 (offset-truth)

    unsigned char __pad_04C;  // X10 supply (csp_canon_members)
    void* q0D0;  // X10 supply (member_lookup)
    void* q0E0;  // X10 supply (member_lookup)
    unsigned int u32_C4;  // X10 supply (member_lookup)
    unsigned char __pad_060;  // 0x60 [X30:canon]
    unsigned int FootClass_E0;  // [X30:default]
    unsigned int Tactical_E4;  // [X30:default]
unsigned int TeamTypeClass_field_60;  // 0x60 [X35-L7 kind=unsigned int]
    char __pad_4C[12];  // 0x4C [X30:member_lookup]
};

} // namespace gamemd
