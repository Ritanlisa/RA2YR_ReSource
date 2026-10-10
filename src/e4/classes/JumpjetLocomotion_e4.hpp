// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct JumpjetLocomotion {
// --- flat members (BEGIN) ---
    AbstractClass * ptr_34;  // 0x34
    ObjectClass * ptr_60;  // 0x60
// --- flat members (END) ---
    char MoveTo(int aP1, unsigned int *a2, int a3);  // G57w10-S raw 0x004B0AD0 IUnknown 占位清除
    AbstractClass * ProcessCollision(char a2, void *a2_2);  // 0x4B0F20
    int  Update(unsigned char * a2, int a3, int a4, void *a1 = 0);  // 0x4B2630
    unsigned int *  TransformCoords(unsigned int * a2, int * a3, int * a4, void *a1 = 0);  // 0x4B4780
    void* Land();  // 0x54CA90
    void* UpdateFacing();  // 0x54D0F0
    char __pad_5C[24];  // 0x5C (ml)
    char __pad_78[9];  // 0x78 (ml)
    static double JumpjetLocomotion_field_0x40(...);  // plateau: C2039/C3861 stub
    static double JumpjetLocomotion_field_0x44(...);  // plateau: C2039/C3861 stub
    static double JumpjetLocomotion_field_0x58(...);  // plateau: C2039/C3861 stub
    static double JumpjetLocomotion_field_0x74(...);  // plateau: C2039/C3861 stub
    static double __pad_48(...);  // plateau: C2039/C3861 stub
    static double __pad_C(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
