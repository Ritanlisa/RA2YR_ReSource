// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SomeVoxelCache;  // fix_fwd_type_supply
struct INIClass;  // fix_fwd_type_supply
struct VoxelAnimType {
    char __pad_0[2];  // 0x0
    unsigned char m_2;  // 0x2
    char __pad_3[3];  // 0x3
    unsigned short tail_6;  // 0x6
    char __pad_8[28];  // 0x8
    unsigned int q024;  // 0x24
    char __pad_28[136];  // 0x28
    unsigned int u32_B0;  // 0xB0
    unsigned int u32_B4;  // 0xB4
    unsigned int u32_B8;  // 0xB8
    unsigned int u32_BC;  // 0xBC
    unsigned int u32_C0;  // 0xC0
    unsigned int u32_C4;  // 0xC4
    char __pad_C8[88];  // 0xC8
    unsigned char q120;  // 0x120
    char __pad_121[199];  // 0x121
    unsigned char u32_1E8;  // 0x1E8
    char __pad_1E9[3];  // 0x1E9
    unsigned int u32_1EC;  // 0x1EC
    char __pad_1F0[8];  // 0x1F0
    unsigned char q1F8;  // 0x1F8
    char __pad_1F9[75];  // 0x1F9
    unsigned int u32_244;  // 0x244
    void * ptr_248;  // 0x248
    unsigned int u32_24C;  // 0x24C
    unsigned char q250;  // 0x250
    char __pad_251[3];  // 0x251
    void * ptr_254;  // 0x254
    void * ptr_258;  // 0x258
    unsigned int u32_25C;  // 0x25C
    unsigned int u32_260;  // 0x260
    unsigned char q264;  // 0x264
    char __pad_265[3];  // 0x265
    void * ptr_268;  // 0x268
    unsigned int u32_26C;  // 0x26C
    void * ptr_270;  // 0x270
    void * ptr_274;  // 0x274
    unsigned char q278;  // 0x278
    char __pad_279[3];  // 0x279
    unsigned int u32_27C;  // 0x27C
    void * ptr_280;  // 0x280
    void * ptr_284;  // 0x284
    void * ptr_288;  // 0x288
    unsigned char q28C;  // 0x28C
    char __pad_28D[3];  // 0x28D
    void * ptr_290;  // 0x290
    char __pad_294[1396];  // 0x294
    void * ptr_808;  // 0x808
    char __pad_80C[1173];  // 0x80C
    unsigned char qCA1;  // 0xCA1
    char __pad_CA2[2];  // 0xCA2
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * LoadSection(const char *a2, int a3);  // 0x5F7A90
    AbstractClass * * LoadBarrel(const char *a2, int a3);  // 0x5F7DB0
    int LoadAnim(void *a1 = 0);  // 0x5F8110
};
} // namespace gamemd
