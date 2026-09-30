// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

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
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    void * NeedsSaveOrLink;  // 0x20
    char q024[24];  // 0x24
    unsigned int u32_28;  // 0x28
    bool enabled;  // 0x2B
    bool mustTransfer;  // 0x2C
    ObjectClass* q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned int q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    char zero_3C;  // 0x3C
    unsigned char UINameLabel;  // 0x3D
    unsigned int q040;  // 0x40
    bool q042;  // 0x42
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    bool q04A;  // 0x4A
    unsigned int u32_4C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned char q05D;  // 0x5D
    void * UIName;  // 0x60
    unsigned char Name;  // 0x64
    unsigned int q068;  // 0x68
    ObjectClass* q06C;  // 0x6C
    unsigned char q070;  // 0x70
    bool q074;  // 0x74
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    void* q088;  // 0x88
    void* q08C;  // 0x8C
    unsigned char q090;  // 0x90
    unsigned int q094;  // 0x94
    unsigned char tail_95;  // 0x95
    void* ArrayIndex;  // 0x98
    bool Difficulty;  // 0x9C
    unsigned int q09D;  // 0x9D
    unsigned int q09E;  // 0x9E
    bool Enabled;  // 0x9F
    bool MustTransfer;  // 0xA0
    unsigned char q0A1;  // 0xA1
    HouseTypeClass* House;  // 0xA4
    TriggerTypeClass* NextTrigger;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    TEventClass* FirstEvent;  // 0xAC
    TActionClass* FirstAction;  // 0xB0
// --- flat members (END) ---
    TechnoClass * * ReadINI(unsigned int * a0, void * aP1, void * aP2, int a4, void * aP4);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int LoadTypeData(void * aP0, int aP1);
    int Write(void * aP0, int * a1, int aP2);
    static double GetFlags(...);  // C2597 interim stub
};

} // namespace gamemd
