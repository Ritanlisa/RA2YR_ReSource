// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct HouseTypeClass;  // fix_fwd_type_supply
struct TEventClass;  // fix_fwd_type_supply
struct TActionClass;  // fix_fwd_type_supply

struct TriggerTypeClass {
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
    char idxArray[24];  // 0x24
    bool enabled;  // 0x2B
    bool mustTransfer;  // 0x2C
    unsigned int alignmentPadding;  // 0x33
    char zero_3C;  // 0x3C
    unsigned char UINameLabel;  // 0x3D
    void * UIName;  // 0x60
    unsigned char Name;  // 0x64
    unsigned char tail_95;  // 0x95
    void* ArrayIndex;  // 0x98
    bool Difficulty;  // 0x9C
    bool Enabled;  // 0x9F
    bool MustTransfer;  // 0xA0
    unsigned char m_align_A1;  // 0xA1
    HouseTypeClass* House;  // 0xA4
    TriggerTypeClass* NextTrigger;  // 0xA8
    TEventClass* FirstEvent;  // 0xAC
    TActionClass* FirstAction;  // 0xB0
// --- flat members (END) ---
    TechnoClass * * ReadINI(unsigned int * a0, TechnoClass * aP1, TechnoClass * aP2, int a4, TechnoClass * aP4);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int LoadTypeData(AbstractTypeClass * aP0, int aP1);
    int Write(TechnoTypeClass * aP0, int * a1, int aP2);
    static int GetFlags(TriggerTypeClass * aP1);
    unsigned int *  Construct(char * Source, void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);  // 0x726c80
    static double House(...);  // plateau: C2039/C3861 stub
    static double u32_6AD(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
