// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Vector {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int q004;  // 0x4
    void* q008;  // 0x8
    bool q00A;  // 0xA
    bool q00B;  // 0xB
    bool IsInitialized;  // 0xC
    unsigned char u8_D;  // 0xD
    unsigned int q010;  // 0x10
    int CapacityIncrement;  // 0x14
    int Count;  // 0x16
    bool q018;  // 0x18
    unsigned char q01C;  // 0x1C
    int q020;  // 0x20
    bool q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    int q050;  // 0x50
    bool q054;  // 0x54
    unsigned int Items;
    unsigned int q0040;
    unsigned int q0041;
// --- flat members (END) ---
    void Cleanup();  // 0x512D30
    void Destructor();  // 0x513100
    void MatrixMulVectorMath(float a2,  float a3,  float a4);    // 0x5AE890
    void Cleanup2();  // 0x67ABE0
    unsigned short * ToFacingMath(unsigned short * a2);  // 0x41C2E0
    void Clear();  // 0x43AE50
    char RemoveAt(AbstractClass * aP1);  // 0x45AE10
    char ReallocDynamic(int a2);  // 0x4D2E40
    int Find(unsigned int * a2);  // 0x4E0550
    BOOL HasCapacity();  // 0x76F0B0
    char Grow();  // 0x7AEEC0
};
} // namespace gamemd
