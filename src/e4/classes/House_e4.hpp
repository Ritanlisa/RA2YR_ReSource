// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once
#include "fundamentals.hpp"



#include "e4/classes/_fwd_e4.hpp"

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass 1
// G57c4: e4 TUs have the native flat gamemd::AbstractClass
// (AbstractClass_e4.hpp); the using-bridge double-declared it (C2874 x38).
// Marker stays defined so the Dialog/SessionClass bridge twins (which
// share this macro) stay suppressed. ra2::game fwd kept for the 1
// qualified corpus use.
namespace ra2 { namespace game { class AbstractClass; } }
#endif
namespace gamemd {
struct HouseClass;  // fix_fwd_type_supply
struct ProgressTimer;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct TimerStruct;  // fix_fwd_type_supply
struct House {
    unsigned char __pad_000;  // 0x0
    char __pad_1[1];  // 0x1
    char House_field_0x2[4];  // 0x2
    char __pad_6[2];  // 0x6
    int q008;  // 0x8
    unsigned char u32_C[24];  // 0xC
    unsigned short u32_24;  // 0x24
    unsigned short u32_26;  // 0x26
    char __pad_28[1];  // 0x28
    char House_field_0x29[4];  // 0x29
    char __pad_2D[3];  // 0x2D
    unsigned int u32_30;  // 0x30
    unsigned int u32_34;  // 0x34
    unsigned int u32_38;  // 0x38
    char __pad_3C[4];  // 0x3C
    AbstractClass * ptr_40;  // 0x40
    void * ptr_44;  // 0x44
    unsigned char __pad_048;  // 0x48
    char __pad_49[3];  // 0x49
    unsigned int u32_4C;  // 0x4C
    char __pad_50[28];  // 0x50
    unsigned int u32_6C;  // 0x6C
    char __pad_70[8];  // 0x70
    int q078;  // 0x78
    char __pad_7C[40];  // 0x7C
    unsigned int u32_A4;  // 0xA4
    char __pad_A8[30];  // 0xA8
    unsigned char u32_C6;  // 0xC6
    char __pad_C7[1];  // 0xC7
    unsigned int u32_C8;  // 0xC8
    char __pad_CC[32];  // 0xCC
    unsigned int u32_EC;  // 0xEC
    char __pad_F0[38];  // 0xF0
    unsigned char u32_116;  // 0x116
    char __pad_117[3];  // 0x117
    unsigned char u32_11A;  // 0x11A
    char u32_11B;  // 0x11B
    unsigned int u32_11C;  // 0x11C
    char __pad_120[32];  // 0x120
    unsigned int u32_140;  // 0x140
    char __pad_144[168];  // 0x144
    int House_field_0x1EC;  // 0x1EC
    char __pad_1F0[48];  // 0x1F0
    AbstractClass * ptr_220;  // 0x220
    unsigned char __pad_224;  // 0x224
    char __pad_225[35];  // 0x225
    ProgressTimer * ptr_248;  // 0x248
    unsigned char __pad_24C;  // 0x24C
    char __pad_24D[3];  // 0x24D
    unsigned int u32_250;  // 0x250
    char __pad_254[68];  // 0x254
    int House_field_0x298;  // 0x298
    char __pad_29C[16];  // 0x29C
    int House_field_0x2AC;  // 0x2AC
    char __pad_2B0[64];  // 0x2B0
    unsigned int u32_2F0;  // 0x2F0
    int u8_2F4;  // 0x2F4
    char __pad_2F8[56];  // 0x2F8
    ParticleSystemClass * ptr_330;  // 0x330
    ParticleSystemClass * ptr_334;  // 0x334
    unsigned char __pad_338;  // 0x338
    char __pad_339[154];  // 0x339
    char House_field_0x3D3[4];  // 0x3D3
    char __pad_3D7[329];  // 0x3D7
    int House_field_0x520;  // 0x520
// --- flat members (BEGIN) ---
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
// --- flat members (END) ---
    int AnnounceUpgrade(int aP1);
    unsigned int * GetStartCoords(unsigned int *aP1);  // 0x47FB90
    int UpdateHouseAI();  // 0x4FD500
    int IsHumanPlayer();  // 0x50B6F0
    int IsCurrentPlayer(void *a1 = 0);  // 0x50B730
    AbstractClass * * ChooseHouseEnemy(BuildingClass * aP1);
    int LookupObject(int a2, void *a2_2);  // 0x544BE0
    int LoadMapFileData(int a2, char a3, void *a3_1 = 0);  // 0x544C20
    void* Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);  // 0x69E090
    int PowerBeginUpdate(AbstractClass * aP1);  // 0x70C270
};
} // namespace gamemd
