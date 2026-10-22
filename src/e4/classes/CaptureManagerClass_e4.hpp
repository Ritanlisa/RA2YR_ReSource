// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct HouseClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct ScenarioClass;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply

struct CaptureManagerClass {
    void * ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    void * uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    unsigned int controlNodes;  // 0x24
    int controlNodeCount;  // 0x28
    HouseClass * controlNodeCapacity;  // 0x2C
    TechnoClass * owner;  // 0x30
    HouseClass * originalOwner;  // 0x34
    bool CaptureManagerClass_field_30;  // 0x38
    bool u32_31;  // 0x39
    char pad_32[2];  // 0x3A
    int __pad_03C;  // 0x3C
    bool CaptureManagerClass_field_40;  // 0x40
    bool CaptureManagerClass_field_41;  // 0x41
    char pad_42[2];  // 0x42
    int overloadLimit;  // 0x44
    int overloadCount;  // 0x48
    int linkCount;  // 0x4C
    int CaptureManagerClass_field_2C;  // 0x50
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    void DecideUnitFate(int aP1, void *a2 = 0);
    char FreeUnit(int a2, int a3, unsigned int *a1, int aP1, unsigned int *aP0, int a5);
    CaptureManagerClass(int a2, int a3, char a4);
    CaptureManagerClass * ddtor(char a2);
    char HandleOverload();
    int LoadFromStream(int a1, int * a2);
    char AddMember(TechnoClass * aP1, void *a2, void *a3);
    bool CanCapture(unsigned int *a2, void *a2_1 = 0);
    int CannotControlAnyMore();
    int DrawLinks(int a1, ...);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetOriginalOwner(int a2);
    int GetTypeIdentifier();
    int IsOverloading(bool * a2);
    int NeedsToDrawLinks();
    int PowerDrainUpdate(int a2);
    int SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2);
    void* CaptureUnit(int a1, int a2, int a3, int aP1, int aP0);
    CaptureManagerClass * ddtor(unsigned int * Block, char a2);
};

} // namespace gamemd
