// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct WalkLocomotion {
// --- flat members (BEGIN) ---
    AbstractClass * ptr_34;  // 0x34
    ObjectClass * ptr_60;  // 0x60
// --- flat members (END) ---
    AbstractClass * *  MoveTo(unsigned int * a2, int a3, void *a1 = 0);  // 0x6A01A0
    char ProcessCollision(char a2, void *a2_2);
    int  Update(unsigned char * a2, int a3, int a4, void *a1 = 0);  // 0x6A1C80
    unsigned int *  TransformCoords(unsigned int * a2, int * a3, int * a4, void *a1 = 0);  // 0x6A3DB0
    unsigned char q0042;  // 0x42 (offset-truth)
    static double WalkLocomotion_field_0x40(...);  // plateau: C2039/C3861 stub
    static double WalkLocomotion_field_0x44(...);  // plateau: C2039/C3861 stub
    static double WalkLocomotion_field_0x58(...);  // plateau: C2039/C3861 stub
    static double u32_58(...);  // plateau: C2039/C3861 stub
    static double u32_5C(...);  // plateau: C2039/C3861 stub
    static double u32_C(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
