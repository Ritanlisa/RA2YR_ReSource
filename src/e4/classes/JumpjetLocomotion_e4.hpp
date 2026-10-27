// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct JumpjetLocomotion {
    char __pad_000[2];  // 0x0
    char JumpjetLocomotion_field_0x2[4];  // 0x2
    char __pad_6[2];  // 0x6
    int q008;  // 0x8
    unsigned int u32_C;  // 0xC
    char __pad_10[16];  // 0x10
    unsigned int q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int u32_28;  // 0x28
    char __pad_2C[4];  // 0x2C
    unsigned int u32_30;  // 0x30
    AbstractClass * ptr_34;  // 0x34
    unsigned char __pad_038;  // 0x38
    char __pad_39[3];  // 0x39
    unsigned int u32_3C;  // 0x3C
    int q040;  // 0x40
    int q044;  // 0x44
    char __pad_48[4];  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned char q050;  // 0x50
    char __pad_51[3];  // 0x51
    unsigned char q054[4];  // 0x54
    unsigned int u32_58;  // 0x58
    char __pad_5C[4];  // 0x5C
    char ptr_60[1];  // 0x60
    unsigned char u8_61;  // 0x61
    unsigned char u8_62;  // 0x62
    unsigned char u8_63;  // 0x63
    char __pad_64[12];  // 0x64
    unsigned int u32_70;  // 0x70
    int q074;  // 0x74
    char __pad_78[4];  // 0x78
    unsigned int u32_7C;  // 0x7C
    char u32_80[1];  // 0x80
    char JumpjetLocomotion_field_0x81[4];  // 0x81
    char __pad_85[3];  // 0x85
    ObjectClass * q088;  // 0x88
    unsigned int q08C;  // 0x8C
    int q090;  // 0x90
    char __pad_94[8];  // 0x94
    int q09C;  // 0x9C
    char __pad_A0[123];  // 0xA0
    char JumpjetLocomotion_field_0x11B[4];  // 0x11B
    char __pad_11F[33];  // 0x11F
    int q140;  // 0x140
    char __pad_144[368];  // 0x144
    int q2B4;  // 0x2B4
    char __pad_2B8[24];  // 0x2B8
    int q2D0;  // 0x2D0
    char __pad_2D4[4];  // 0x2D4
    int q2D8;  // 0x2D8
    char __pad_2DC[88];  // 0x2DC
    int q334;  // 0x334
    char __pad_338[149];  // 0x338
    char JumpjetLocomotion_field_0x3CD[4];  // 0x3CD
    char __pad_3D1[86];  // 0x3D1
    char JumpjetLocomotion_field_0x427[4];  // 0x427
    char __pad_42B[1];  // 0x42B
    int q42C;  // 0x42C
    char __pad_430[320];  // 0x430
    int q570;  // 0x570
    char __pad_574[4];  // 0x574
    int q578;  // 0x578
    int q57C;  // 0x57C
    char __pad_580[24];  // 0x580
    int q598;  // 0x598
    char __pad_59C[8];  // 0x59C
    int q5A4;  // 0x5A4
    char __pad_5A8[44];  // 0x5A8
    int q5D4;  // 0x5D4
    char __pad_5D8[8];  // 0x5D8
    int q5E0;  // 0x5E0
    int q5E4;  // 0x5E4
    char __pad_5E8[84];  // 0x5E8
    int q63C;  // 0x63C
    int q640;  // 0x640
    char __pad_644[4];  // 0x644
    int q648;  // 0x648
    int q64C;  // 0x64C
    char __pad_650[24];  // 0x650
    int q668;  // 0x668
    char __pad_66C[4];  // 0x66C
    int q670;  // 0x670
    char __pad_674[17];  // 0x674
    char JumpjetLocomotion_field_0x685[4];  // 0x685
    char __pad_689[1];  // 0x689
    char JumpjetLocomotion_field_0x68A[4];  // 0x68A
    char __pad_68E[31];  // 0x68E
    char JumpjetLocomotion_field_0x6AD[4];  // 0x6AD
    char __pad_6B1[4];  // 0x6B1
    char JumpjetLocomotion_field_0x6B5[4];  // 0x6B5
    char __pad_6B9[1875];  // 0x6B9
    int qE0C;  // 0xE0C
    char __pad_E10[2392];  // 0xE10
    int q1768;  // 0x1768
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char MoveTo(_DWORD *a2, int a3);  // G57w10-S raw 0x004B0AD0 IUnknown 占位清除
    AbstractClass * ProcessCollision(char a2, void *a2_2);  // 0x4B0F20
    int Update(unsigned char * a2, int a3, int a4, void *a4_2);  // 0x4B2630
    unsigned int * TransformCoords(unsigned int *aP1, int *aP2, int *aP3, void *a4 = 0);  // 0x4B4780
    char Land();  // 0x54CA90
    void* UpdateFacing();  // 0x54D0F0
};
} // namespace gamemd
