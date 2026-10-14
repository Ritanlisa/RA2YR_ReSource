// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct WalkLocomotion {
// --- flat members (BEGIN) ---
    AbstractClass * ptr_34;  // 0x34
    ObjectClass * ptr_60;  // 0x60
// --- flat members (END) ---
    AbstractClass * * MoveTo(unsigned int *aP1, int aP3, void *a3 = 0);  // 0x6A01A0
    char ProcessCollision(char a2, void *a2_2);
    int Update(unsigned char * a2, int a3, int a4, void *a4_2);  // 0x6A1C80
    unsigned int * TransformCoords(unsigned int *aP1, int *aP2, int *aP3, void *a4 = 0);  // 0x6A3DB0
    unsigned char q0042;  // 0x42 (offset-truth)

    int q040;  // X10 supply (member_lookup)
    int q044;  // X10 supply (member_lookup)
    unsigned int u32_58;  // X10 supply (member_lookup)
    unsigned int u32_5C;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
};
} // namespace gamemd
