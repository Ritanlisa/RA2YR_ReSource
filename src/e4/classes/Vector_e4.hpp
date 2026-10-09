// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Vector {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    bool q00A;  // 0xA
    bool q00B;  // 0xB
    bool IsInitialized;  // 0xC
    unsigned char u8_D;  // 0xD
    void* q010;  // 0x10
// --- flat members (END) ---
    void* Cl_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon Vector::Cl is a method)
    static unsigned int Cl(...);  // w18j3 C2597 static-call supply (w16g4 convention)
    int Cleanup();  // 0x512D30
    int Destructor();  // 0x513100
    int MatrixMulVectorMath(float a2, float a3, float a4);  // 0x5AE890
    int Cleanup2();  // 0x67ABE0
    unsigned short * ToFacingMath(unsigned short *a2);  // 0x41C2E0
    int Clear();  // 0x43AE50
    static int Clear(int aP0);  // 0x43AE50 G42.35 static-form sync (ui/supplied sites 0x5D3051/0x5D3098)
    int RemoveAt(int aP1);  // 0x45AE10
    char ReallocDynamic(int a2);  // G57w10-S raw 0x4D2E40 ReallocDynamicVector char __thiscall
    int Find(unsigned int * a2);  // 0x4E0550
    BOOL HasCapacity();  // 0x76F0B0
    char Grow();  // 0x7AEEC0
    static double TwoDMagnitudeMath(Vector * aP1);  // G57w10-S raw 0x4C1B50 (was C2597 interim stub)
    unsigned char m_1;  // 0x1 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
    unsigned int u32_14;  // 0x14 (offset-truth)
    unsigned int u32_18;  // 0x18 (offset-truth)
    unsigned int u32_1C;  // 0x1C (offset-truth)
    unsigned int u32_24;  // 0x24 (offset-truth)
};
} // namespace gamemd
