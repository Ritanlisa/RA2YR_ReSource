// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct WalkLocomotion {
    unsigned char __pad_000;  // 0x0
    char __pad_1[1];  // 0x1
    char WalkLocomotion_field_0x2[4];  // 0x2
    char __pad_6[2];  // 0x6
    int WalkLocomotion_field_0x8;  // 0x8
    unsigned int u32_C;  // 0xC
    char __pad_10[36];  // 0x10
    AbstractClass * ptr_34;  // 0x34
    unsigned char __pad_038;  // 0x38
    char __pad_39[7];  // 0x39
    int q040;  // 0x40
    int q044;  // 0x44
    char __pad_48[16];  // 0x48
    unsigned int u32_58;  // 0x58
    unsigned int u32_5C;  // 0x5C
    ObjectClass * ptr_60;  // 0x60
    unsigned char __pad_064;  // 0x64
    char __pad_65[15];  // 0x65
    int WalkLocomotion_field_0x74;  // 0x74
    char __pad_78[9];  // 0x78
    char WalkLocomotion_field_0x81[4];  // 0x81
    char __pad_85[7];  // 0x85
    int WalkLocomotion_field_0x8C;  // 0x8C
    int WalkLocomotion_field_0x90;  // 0x90
    char __pad_94[8];  // 0x94
    int WalkLocomotion_field_0x9C;  // 0x9C
    char __pad_A0[123];  // 0xA0
    char WalkLocomotion_field_0x11B[4];  // 0x11B
    char __pad_11F[33];  // 0x11F
    int WalkLocomotion_field_0x140;  // 0x140
    char __pad_144[368];  // 0x144
    int WalkLocomotion_field_0x2B4;  // 0x2B4
    char __pad_2B8[277];  // 0x2B8
    char WalkLocomotion_field_0x3CD[4];  // 0x3CD
    char __pad_3D1[415];  // 0x3D1
    int WalkLocomotion_field_0x570;  // 0x570
    char __pad_574[4];  // 0x574
    int WalkLocomotion_field_0x578;  // 0x578
    int WalkLocomotion_field_0x57C;  // 0x57C
    char __pad_580[24];  // 0x580
    int WalkLocomotion_field_0x598;  // 0x598
    char __pad_59C[56];  // 0x59C
    int WalkLocomotion_field_0x5D4;  // 0x5D4
    char __pad_5D8[8];  // 0x5D8
    int WalkLocomotion_field_0x5E0;  // 0x5E0
    int WalkLocomotion_field_0x5E4;  // 0x5E4
    char __pad_5E8[84];  // 0x5E8
    int WalkLocomotion_field_0x63C;  // 0x63C
    int WalkLocomotion_field_0x640;  // 0x640
    char __pad_644[4];  // 0x644
    int WalkLocomotion_field_0x648;  // 0x648
    int WalkLocomotion_field_0x64C;  // 0x64C
    char __pad_650[24];  // 0x650
    int WalkLocomotion_field_0x668;  // 0x668
    char __pad_66C[4];  // 0x66C
    int WalkLocomotion_field_0x670;  // 0x670
    char __pad_674[17];  // 0x674
    char WalkLocomotion_field_0x685[4];  // 0x685
    char __pad_689[1];  // 0x689
    char WalkLocomotion_field_0x68A[4];  // 0x68A
    char __pad_68E[39];  // 0x68E
    char WalkLocomotion_field_0x6B5[4];  // 0x6B5
    char __pad_6B9[11];  // 0x6B9
    int WalkLocomotion_field_0x6C4;  // 0x6C4
    char __pad_6C8[1860];  // 0x6C8
    int WalkLocomotion_field_0xE0C;  // 0xE0C
    char __pad_E10[2392];  // 0xE10
    int WalkLocomotion_field_0x1768;  // 0x1768
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char MoveTo(unsigned int *aP1, int aP3, void *a3 = 0);  // 0x6A01A0
    char ProcessCollision(char a2, void *a2_2);
    int Update(unsigned char * a2, int a3, int a4, void *a4_2);  // 0x6A1C80
    unsigned int * TransformCoords(unsigned int *aP1, int *aP2, int *aP3, void *a4 = 0);  // 0x6A3DB0
};
} // namespace gamemd
