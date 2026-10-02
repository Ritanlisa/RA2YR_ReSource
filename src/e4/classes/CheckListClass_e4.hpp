// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct CheckListClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char __pad_0[87];  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned char q014;  // 0x14
    char Enabled;  // 0x15
    int Count;  // 0x16
    unsigned char q018;  // 0x18
    unsigned int q01A;  // 0x1A
    bool q01B;  // 0x1B
    unsigned char q01C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    unsigned int u32_20;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned int q02D;  // 0x2D
    unsigned char q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned int u32_48;  // 0x48
    bool q04A;  // 0x4A
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
// --- flat members (END) ---
    int COMStub();
    int COMStub_Return0();
    int ddtor(int a2);
    void StubReturn();
    void StubReturnFalse(int a1, int a2, int a3);
    void StubReturnVoid();
    unsigned int u32_174;  // 0x174
    unsigned int u32_16C;  // 0x16C
};

} // namespace gamemd
