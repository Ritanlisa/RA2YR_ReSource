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
    bool q017;  // 0x17
    int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    void * NeedsSaveOrLink;  // 0x20
    char TeamTypeClass_field_24[4];  // 0x24
    unsigned char TeamTypeClass_field_28;  // 0x28
    unsigned char pad_29;  // 0x29
    bool q02B;  // 0x2B
    char TeamTypeClass_field_2C[4];  // 0x2C
    bool q02F;  // 0x2F
    char TeamTypeClass_field_30[4];  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    char TeamTypeClass_field_34[4];  // 0x34
    char TeamTypeClass_field_38[4];  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    char TeamTypeClass_field_3C[4];  // 0x3C
    unsigned int UINameLabel;  // 0x3D
    unsigned int taskForce;  // 0x40
    bool q042;  // 0x42
    char taskForceCount[4];  // 0x44
    char taskForceCapacity[4];  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char u8_4D;  // 0x4D
    unsigned char q04F;  // 0x4F
    unsigned int q050;  // 0x50
    void* q054;  // 0x54
    char TeamTypeClass_field_58[4];  // 0x58
    unsigned char TeamTypeClass_field_5C;  // 0x5C
    unsigned char TeamTypeClass_field_5D;  // 0x5D
    unsigned char pad_5E;  // 0x5E
    unsigned int u32_60;  // 0x60
    char TeamTypeClass_field_64[4];  // 0x64
    char TeamTypeClass_field_68[4];  // 0x68
    char TeamTypeClass_field_6C[4];  // 0x6C
    unsigned char TeamTypeClass_field_70;  // 0x70
    unsigned char TeamTypeClass_field_71;  // 0x71
    unsigned char pad_72;  // 0x72
// --- flat members (END) ---
    AbstractClass * * FindOrCreateTaskForce();
    AbstractClass * * GetMaxCount(CCINIClass * aP1);
    AbstractClass * * LoadFromINI(unsigned char *** aP1);
    TeamTypeClass * ReadScriptData(char * a1, int a2);
    TeamTypeClass * ddtor(char a2);
    int Check(int a2);
    int Construct();
    int DestroyAllInstances();
    int FindByName();
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
    int ProcessTaskForce();
    int SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2);
    unsigned int * GetTransportWaypoint(unsigned int * a2);
    void * CreateScriptType();
};

} // namespace gamemd
