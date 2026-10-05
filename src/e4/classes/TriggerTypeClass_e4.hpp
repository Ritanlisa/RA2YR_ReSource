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
    bool q017;  // 0x17
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    char q024[24];  // 0x24
    unsigned int u32_28;  // 0x28
    ObjectClass* q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned int q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned char UINameLabel;  // 0x3D
    unsigned int q040;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void * UIName;  // 0x60
    unsigned char Name;  // 0x64
    unsigned int q068;  // 0x68
    ObjectClass* q06C;  // 0x6C
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    unsigned int q080;  // 0x80
    void* q08C;  // 0x8C
    unsigned char q090;  // 0x90
    void* ArrayIndex;  // 0x98
    bool Difficulty;  // 0x9C
    bool Enabled;  // 0x9F
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
    static double GetFlags(...);  // C2597 interim stub
    unsigned int * Construct(char *Source);  // 0x726c80
};

} // namespace gamemd
