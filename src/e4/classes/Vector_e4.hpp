// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Vector {
    void* Cl_ph;  // 0x0
    int q004;  // 0x4
    int u32_8;  // 0x8
    bool IsInitialized;  // 0xC
    unsigned char u32_D;  // 0xD
    char __pad_E[2];  // 0xE
    unsigned int Vector_field_0x10;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Cleanup(void *a1 = 0, void *a2 = 0);  // 0x512D30
    int Destructor(void *a1 = 0);  // 0x513100
    int  MatrixMulVectorMath(float a2, float a3, float a4);  // 0x5AE890
    int Cleanup2(void *a1 = 0);  // 0x67ABE0
    unsigned short *  ToFacingMath(unsigned short *a2);
    int Clear(void *a1 = 0);  // 0x43AE50
    int RemoveAt(int aP1, void *a2 = 0);  // 0x45AE10
    static void ReallocDynamic(int a2, void *a2_1 = 0);
    int Find(unsigned int * a2, void *a2_1 = 0);  // 0x4E0550
    BOOL HasCapacity();  // 0x76F0B0
    char Grow();  // 0x7AEEC0
    static double TwoDMagnitudeMath(Vector * aP1);
    void Math_Vector2D_Magnitude();  // plateau: def-aligned C2039/C2660
};
} // namespace gamemd
