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
    unsigned int Vector_field_0x10;
    unsigned int Vector_field_0x4;
    unsigned int Vector_field_0x8;
    unsigned int *__pad_0;
    unsigned int *m_1;
    unsigned int m_8;
    unsigned int m_C;
    unsigned int u32_14;
    unsigned int u32_18;
    unsigned int u32_1C;
    unsigned int u32_24;
    // dup-member: unsigned int HasCapacity;
    unsigned int Math_Vector2D_Magnitude;
// --- flat members (END) ---
    void Cleanup(void *a1_1);  // 0x512D30
    void Destructor(void *a1_1);  // 0x513100
    int MatrixMulVectorMath(float a2, float a3, float a4);  // 0x5AE890
    int Cleanup2();  // 0x67ABE0
    unsigned short * ToFacingMath(unsigned short *a2);  // 0x41C2E0
    void Clear();  // 0x43AE50
    int RemoveAt(int aP1);  // 0x45AE10
    void ReallocDynamic(int a2, int a2_2);
    int Find(unsigned int * a2);  // 0x4E0550
    BOOL HasCapacity();  // 0x76F0B0
    char Grow();  // 0x7AEEC0
    static double TwoDMagnitudeMath(...);  // C2597 interim stub
};
} // namespace gamemd
