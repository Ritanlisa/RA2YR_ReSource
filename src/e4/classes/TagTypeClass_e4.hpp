// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AbstractTypeClass;  // fix_fwd_type_supply
struct TriggerTypeClass;  // fix_fwd_type_supply

struct TagTypeClass {
    unsigned int ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    int arrayIndex;  // 0x24
    int persistence;  // 0x28
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * CleanupMembers(void *a1);
    AbstractTypeClass * Construct(char *aP1, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    AbstractTypeClass * FindOrCreate(ObjectClass * Source);
    TagTypeClass * ddtor(char a2);
    TriggerTypeClass * * FindOrCreateTriggerType(char *Source);
    int GetAuxField();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetEvent(int a2, int a3);
    int GetObjectSize();
    int GetParameter(char * a2);
    int GetTypeIdentifier();
    int LoadTypeData(AbstractTypeClass * aP0, int aP1);
    int PowerDrainUpdate(int * a2);
    int SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2);
    void* GetAction(unsigned char *** a2);
};

} // namespace gamemd
