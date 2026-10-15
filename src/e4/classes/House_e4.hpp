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
// --- flat members (BEGIN) ---
    AbstractClass * ptr_40;  // 0x40
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    TypeList * ptr_44;  // 0x44
#else
    void* ptr_44;  // 0x44  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
    AbstractClass * ptr_220;  // 0x220
    ProgressTimer * ptr_248;  // 0x248
    ParticleSystemClass * ptr_330;  // 0x330
    ParticleSystemClass * ptr_334;  // 0x334
    AnimClass * ptr_468;  // 0x468
    TimerStruct * ptr_480;  // 0x480
// --- flat members (END) ---
    unsigned char __pad_2B0[0x1A0];  // G42.33 b4 C2: flat-carrier vocab ([120] fn-ptr 槽覆盖 0x2B0..0x450)
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
    unsigned char u32_702;  // 0x702 (offset-truth)
    unsigned char u32_C6;  // 0xC6 (offset-truth)
    unsigned int u32_C8;  // 0xC8 (ml)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned char __pad_24C;  // X10 supply (csp_canon_members)
    int q008;  // X10 supply (member_lookup)
    unsigned char q010;  // X10 supply (member_lookup)
    int q078;  // X10 supply (member_lookup)
    int q1EC;  // X10 supply (member_lookup)
    unsigned int u32_116;  // X10 supply (member_lookup)
    unsigned int u32_11A;  // X10 supply (member_lookup)
    char u32_11B;  // X10 supply (member_lookup)
    unsigned int u32_11C;  // X10 supply (member_lookup)
    unsigned int u32_11D;  // X10 supply (member_lookup)
    unsigned int u32_11E;  // X10 supply (member_lookup)
    unsigned int u32_140;  // X10 supply (member_lookup)
    unsigned int u32_24;  // X10 supply (member_lookup)
    unsigned int u32_250;  // X10 supply (member_lookup)
    unsigned int u32_26;  // X10 supply (member_lookup)
    unsigned int u32_2F0;  // X10 supply (member_lookup)
    unsigned int u32_34;  // X10 supply (member_lookup)
    unsigned int u32_38;  // X10 supply (member_lookup)
    unsigned int u32_4C;  // X10 supply (member_lookup)
    unsigned int u32_5490;  // X10 supply (member_lookup)
    unsigned int u32_5494;  // X10 supply (member_lookup)
    unsigned int u32_54D8;  // X10 supply (member_lookup)
    unsigned int u32_5600;  // X10 supply (member_lookup)
    unsigned int u32_5608;  // X10 supply (member_lookup)
    unsigned int u32_5614;  // X10 supply (member_lookup)
    unsigned int u32_5640;  // X10 supply (member_lookup)
    unsigned int u32_5648;  // X10 supply (member_lookup)
    unsigned int u32_577C;  // X10 supply (member_lookup)
    unsigned int u32_6C;  // X10 supply (member_lookup)
    unsigned int u32_A4;  // X10 supply (member_lookup)
    unsigned char u32_C[29];  /* char[29] */  // X10 supply (member_lookup)
    unsigned int u32_EC;  // X10 supply (member_lookup)
    int u8_2F4;  // X10 supply (member_lookup)
    void* q004;  // 0x4
};
} // namespace gamemd
