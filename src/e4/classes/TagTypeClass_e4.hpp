// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct TagTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    void * NeedsSaveOrLink;  // 0x20
    char arrayIndex[4];  // 0x24
    unsigned int persistence;  // 0x28
    bool q02B;  // 0x2B
    unsigned int persistence0;
    unsigned int q094;
    unsigned int q098;
    unsigned int q09C;
    unsigned int q0A0;
    unsigned int u32_250;
    unsigned int u32_98;
    unsigned int u32_9C;
    unsigned int uniqueId0;
    unsigned int vtable46;
    unsigned int __pad_0;
// --- flat members (END) ---
    AbstractClass * * CleanupMembers();
    AbstractTypeClass * * Construct(void * aP1, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0);
    AbstractTypeClass * * FindOrCreate(void *a1 = 0);
    TagTypeClass * ddtor(char a2);
    TriggerTypeClass * * FindOrCreateTriggerType(void *a1 = 0);
    int GetAuxField();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetEvent(int a2, int a3);
    int GetObjectSize();
    int GetParameter(char * a2);
    int GetTypeIdentifier();
    int LoadTypeData(void * aP0, int aP1);
    int PowerDrainUpdate(int * a2);
    int SaveToINI(void * aP0, int * a1, int aP2);
    void* GetAction(unsigned char *** a2);
};

} // namespace gamemd
