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
#pragma pack(push, 1)  // X60: binary-packed layout
    unsigned char __pad_000;  // 0x0
    char __pad_1[1];  // 0x1
    char House_field_0x2[4];  // 0x2
    char __pad_6[2];  // 0x6
    int q008;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned char q010;  // 0x10
    char __pad_11[19];  // 0x11
    unsigned char u32_24;  // 0x24
    char __pad_25[1];  // 0x25
    unsigned char u32_26;  // 0x26
    char __pad_27[1];  // 0x27
    char __pad_28[1];  // 0x28
    char House_field_0x29[4];  // 0x29
    char q02D[3];  // 0x2D
    unsigned char u32_30;  // 0x30
    char __pad_31[3];  // 0x31
    unsigned int u32_34;  // 0x34
    unsigned int u32_38;  // 0x38
    char __pad_3C[4];  // 0x3C
    void * ptr_40;  // 0x40
    void * ptr_44;  // 0x44
    char __pad_48[4];  // 0x48
    unsigned char u32_4C;  // 0x4C
    char __pad_4D[31];  // 0x4D
    unsigned char u32_6C;  // 0x6C
    char __pad_6D[3];  // 0x6D
    char __pad_70[8];  // 0x70
    int q078;  // 0x78
    unsigned char q07C;  // 0x7C
    char __pad_7D[39];  // 0x7D
    unsigned char u32_A4;  // 0xA4
    char __pad_A5[71];  // 0xA5
    unsigned int u32_EC;  // 0xEC
    char __pad_F0[38];  // 0xF0
    unsigned short u32_116;  // 0x116
    char __pad_118[2];  // 0x118
    unsigned char u32_11A;  // 0x11A
    char u32_11B;  // 0x11B
    unsigned char u32_11C;  // 0x11C
    unsigned char u32_11D;  // 0x11D
    unsigned char u32_11E;  // 0x11E
    char __pad_11F[1];  // 0x11F
    char __pad_120[32];  // 0x120
    unsigned int u32_140;  // 0x140
    char __pad_144[168];  // 0x144
    unsigned char q1EC;  // 0x1EC
    char __pad_1ED[3];  // 0x1ED
    unsigned int q1F0;  // 0x1F0
    char __pad_1F4[1];  // 0x1F4
    unsigned char u32_1F5;  // 0x1F5
    unsigned int u32_1F6;  // 0x1F6
    char __pad_1FA[86];  // 0x1FA
    unsigned char u32_250;  // 0x250
    char __pad_251[3];  // 0x251
    char __pad_254[68];  // 0x254
    int q298;  // 0x298
    char __pad_29C[16];  // 0x29C
    int q2AC;  // 0x2AC
    unsigned char q2B0;  // 0x2B0
    char __pad_2B1[63];  // 0x2B1
    unsigned char u32_2F0;  // 0x2F0
    char __pad_2F1[3];  // 0x2F1
    unsigned char u8_2F4;  // 0x2F4
    char __pad_2F5[3];  // 0x2F5
    char __pad_2F8[56];  // 0x2F8
    ParticleSystemClass * ptr_330;  // 0x330
    ParticleSystemClass * ptr_334;  // 0x334
    unsigned char __pad_338;  // 0x338
    char __pad_339[154];  // 0x339
    char House_field_0x3D3[4];  // 0x3D3
    char __pad_3D7[329];  // 0x3D7
    int q520;  // 0x520
    char __pad_524[20160];  // 0x524
    unsigned int u32_53E4;  // 0x53E4
    char __pad_53E8[76];  // 0x53E8
    unsigned int u32_5434;  // 0x5434
    unsigned int u32_5438;  // 0x5438
    char __pad_543C[76];  // 0x543C
    unsigned int u32_5488;  // 0x5488
    char __pad_548C[4];  // 0x548C
    unsigned int u32_5490;  // 0x5490
    unsigned int u32_5494;  // 0x5494
    char __pad_5498[64];  // 0x5498
    unsigned int u32_54D8;  // 0x54D8
    char __pad_54DC[12];  // 0x54DC
    unsigned int u32_54E8;  // 0x54E8
    char __pad_54EC[100];  // 0x54EC
    unsigned int VectorClass_5550;  // 0x5550
    char __pad_5554[16];  // 0x5554
    unsigned int VectorClass_5564;  // 0x5564
    char __pad_5568[16];  // 0x5568
    unsigned int VectorClass_5578;  // 0x5578
    char __pad_557C[16];  // 0x557C
    unsigned int VectorClass_558C;  // 0x558C
    char __pad_5590[112];  // 0x5590
    unsigned int u32_5600;  // 0x5600
    char __pad_5604[4];  // 0x5604
    unsigned int u32_5608;  // 0x5608
    char __pad_560C[8];  // 0x560C
    unsigned int u32_5614;  // 0x5614
    char __pad_5618[40];  // 0x5618
    unsigned int u32_5640;  // 0x5640
    char __pad_5644[4];  // 0x5644
    unsigned int u32_5648;  // 0x5648
    char __pad_564C[304];  // 0x564C
    unsigned int u32_577C;  // 0x577C
// --- flat members (BEGIN) ---
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
// --- flat members (END) ---
    int AnnounceUpgrade(int a2);
    unsigned int * GetStartCoords(unsigned int *aP1);  // 0x47FB90
    int UpdateHouseAI();  // 0x4FD500
    int IsHumanPlayer();  // 0x50B6F0
    int IsCurrentPlayer(void *a1 = 0);  // 0x50B730
    AbstractClass * * ChooseHouseEnemy(BuildingClass * aP1);
    int LookupObject(int a2, void *a2_2);  // 0x544BE0
    int LoadMapFileData(int a2, char a3, void *a3_1 = 0);  // 0x544C20
    void* Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);  // 0x69E090
    int PowerBeginUpdate(AbstractClass * aP1);  // 0x70C270
#pragma pack(pop)
};
} // namespace gamemd
