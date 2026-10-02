// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TintStruct;  // fix_fwd_type_supply

struct LightSourceClass {
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
    unsigned int LightIntensity;  // 0x24
    char LightTint[12];  // 0x28
    bool q02B;  // 0x2B
    TintStruct* q02C;  // 0x2C
    TintStruct* q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    char DetailLevel[4];  // 0x34
    char Location[12];  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned int q03C;  // 0x3C
    unsigned int q03D;  // 0x3D
    unsigned int q040;  // 0x40
    bool q042;  // 0x42
    char LightVisibility[4];  // 0x44
    bool Activated;  // 0x48
    bool tail_49;  // 0x49
    bool q04A;  // 0x4A
// --- flat members (END) ---
    LightSourceClass * CopyTo(char a2 a2);
    void Constructor(void *a1, void *a2, void *a3);
    int Seek(TechnoTypeClass * aP0, int * a1, int aP2);
    int Stat(AbstractClass * aP1);
    int StubReturn54();
    int StubReturn76();
    int Write(AbstractClass * aP0, int aP1);
    int ddtor(int a1, unsigned int * a2);
    _DWORD * Construct(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
};

} // namespace gamemd
