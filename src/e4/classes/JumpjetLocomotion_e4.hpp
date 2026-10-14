// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct JumpjetLocomotion {
// --- flat members (BEGIN) ---
    AbstractClass * ptr_34;  // 0x34
    ObjectClass * ptr_60;  // 0x60
// --- flat members (END) ---
    char MoveTo(int aP1, unsigned int *aP3, int a3_1);  // G57w10-S raw 0x004B0AD0 IUnknown 占位清除
    AbstractClass * ProcessCollision(char a2, void *a2_2);  // 0x4B0F20
    int Update(unsigned char * a2, int a3, int a4, void *a4_2);  // 0x4B2630
    unsigned int * TransformCoords(unsigned int *aP1, int *aP2, int *aP3, void *a4 = 0);  // 0x4B4780
    void* Land();  // 0x54CA90
    void* UpdateFacing();  // 0x54D0F0
    char __pad_5C[24];  // 0x5C (ml)
    char __pad_78[9];  // 0x78 (ml)

    unsigned char __pad_038;  // X10 supply (csp_canon_members)
    unsigned int q020;  // X10 supply (member_lookup)
    unsigned int q024;  // X10 supply (member_lookup)
    int q040;  // X10 supply (member_lookup)
    int q044;  // X10 supply (member_lookup)
    unsigned char q050;  // X10 supply (member_lookup)
    unsigned char q054[4];  /* ProgressTimer */  // X10 supply (member_lookup)
    int q074;  // X10 supply (member_lookup)
    ObjectClass* q088;  // X10 supply (member_lookup)
    int q08C;  // X10 supply (member_lookup)
    unsigned int u32_28;  // X10 supply (member_lookup)
    unsigned int u32_30;  // X10 supply (member_lookup)
    unsigned int u32_3C;  // X10 supply (member_lookup)
    unsigned int u32_58;  // X10 supply (member_lookup)
    unsigned int u32_70;  // X10 supply (member_lookup)
    unsigned int u32_7C;  // X10 supply (member_lookup)
    int u32_80;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
};
} // namespace gamemd
