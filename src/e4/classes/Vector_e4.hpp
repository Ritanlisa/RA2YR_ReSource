// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Vector {
// --- flat members (BEGIN) ---
    bool IsInitialized;  // 0xC
// --- flat members (END) ---
    void* Cl_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon Vector::Cl is a method)
    static unsigned int Cl(...);
    int Cleanup(void *a1 = 0, void *a2 = 0);  // 0x512D30
    int Destructor(void *a1 = 0);  // 0x513100
    int  MatrixMulVectorMath(float a2, float a3, float a4);  // 0x5AE890
    int Cleanup2(void *a1 = 0);  // 0x67ABE0
    unsigned short *  ToFacingMath(unsigned short *a2);
    int Clear(void *a1 = 0);  // 0x43AE50
    int  RemoveAt(int a2, void *a1 = 0);  // 0x45AE10
    char ReallocDynamic(int a2, void *a1 = 0);
    int  Find(unsigned int * a2, void *a1 = 0);  // 0x4E0550
    BOOL HasCapacity();  // 0x76F0B0
    char Grow();  // 0x7AEEC0
    static double TwoDMagnitudeMath(Vector * aP1);
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
    unsigned int u32_14;  // 0x14 (offset-truth)
    unsigned int u32_18;  // 0x18 (offset-truth)
    unsigned int u32_1C;  // 0x1C (offset-truth)
    unsigned int u32_24;  // 0x24 (offset-truth)
    void Math_Vector2D_Magnitude();  // plateau: def-aligned C2039/C2660
    static double Vector_field_0x10(...);  // plateau: C2039/C3861 stub
    static double Vector_field_0x4(...);  // plateau: C2039/C3861 stub
    static double Vector_field_0x8(...);  // plateau: C2039/C3861 stub
    static double __pad_0(...);  // plateau: C2039/C3861 stub
    static double __pad_010(...);  // plateau: C2039/C3861 stub
    static double q004(...);  // plateau: C2039/C3861 stub
    static double q008(...);  // plateau: C2039/C3861 stub
    static double u32_20(...);  // plateau: C2039/C3861 stub
    static double u32_28(...);  // plateau: C2039/C3861 stub
    static double u32_2C(...);  // plateau: C2039/C3861 stub
    static double u32_8(...);  // plateau: C2039/C3861 stub
    static double u8_D(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
