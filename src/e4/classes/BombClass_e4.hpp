// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BombClass {
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
    int q024;  // 0x24
    char BombClass_field_28[4];  // 0x28
    bool q02B;  // 0x2B
    char BombClass_field_2C[4];  // 0x2C
    unsigned int audioController;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned int u32_34;  // 0x34
    void* q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned int q03C;  // 0x3C
    unsigned int q03D;  // 0x3D
    char q040[4];  // 0x40
    bool q042;  // 0x42
    char soundIndex[4];  // 0x44
    unsigned int q048;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned int q050;  // 0x50
    char BombClass_field_54[4];  // 0x54
    bool BombClass_field_58;  // 0x58
    unsigned char pad_59;  // 0x59
    unsigned int __pad_24;
    unsigned int vtable22;
    unsigned int vtable23;
    unsigned int DTOR;
// --- flat members (END) ---
    BombClass * CopyTo(char a2);
    int InitPool();
    int IsDeathBomb();
    int Seek(void * aP0, int * a1, int aP2);
    int Stat(int * a2);
    int TimeToExplode();
    int Write(void * aP0, int aP1);
    int ddtor(int a1, unsigned int * a2);
    void * GetCurrentFrame();
};

} // namespace gamemd
