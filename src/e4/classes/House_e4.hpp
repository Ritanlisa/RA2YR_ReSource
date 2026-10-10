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
    TypeList * ptr_44;  // 0x44
    AbstractClass * ptr_220;  // 0x220
    ProgressTimer * ptr_248;  // 0x248
    ParticleSystemClass * ptr_330;  // 0x330
    ParticleSystemClass * ptr_334;  // 0x334
    AnimClass * ptr_468;  // 0x468
    TimerStruct * ptr_480;  // 0x480
// --- flat members (END) ---
    unsigned char __pad_2B0[0x1A0];  // G42.33 b4 C2: flat-carrier vocab ([120] fn-ptr 槽覆盖 0x2B0..0x450)
    int AnnounceUpgrade(int a2);
    unsigned int * GetStartCoords(unsigned int *aP1);  // 0x47FB90
    int UpdateHouseAI();  // 0x4FD500
    int IsHumanPlayer();  // 0x50B6F0
    int IsCurrentPlayer(void *a1 = 0);  // 0x50B730
    void * * ChooseHouseEnemy(void * aP1);
    int  LookupObject(int a2, void *a1 = 0);  // 0x544BE0
    int  LoadMapFileData(int a2, char a3, void *a1 = 0);  // 0x544C20
    void* Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);  // 0x69E090
    int  PowerBeginUpdate(int a2);  // 0x70C270
    unsigned char u32_702;  // 0x702 (offset-truth)
    unsigned char u32_C6;  // 0xC6 (offset-truth)
    unsigned int u32_C8;  // 0xC8 (ml)
    static double House_field_0x1EC(...);  // plateau: C2039/C3861 stub
    static double House_field_0x29(...);  // plateau: C2039/C3861 stub
    static double __pad_46C(...);  // plateau: C2039/C3861 stub
    static double u32_116(...);  // plateau: C2039/C3861 stub
    static double u32_11C(...);  // plateau: C2039/C3861 stub
    static double u32_11D(...);  // plateau: C2039/C3861 stub
    static double u32_11E(...);  // plateau: C2039/C3861 stub
    static double u32_140(...);  // plateau: C2039/C3861 stub
    static double u32_26(...);  // plateau: C2039/C3861 stub
    static double u32_38(...);  // plateau: C2039/C3861 stub
    static double u32_4C(...);  // plateau: C2039/C3861 stub
    static double u32_90(...);  // plateau: C2039/C3861 stub
    static double u32_EC(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
