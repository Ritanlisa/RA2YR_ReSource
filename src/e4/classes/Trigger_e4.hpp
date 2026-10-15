// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MSAnim;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct MSShapeAnim;  // fix_fwd_type_supply
struct Trigger {
// --- flat members (BEGIN) ---
    MSAnim * ptr_4;  // 0x4
    CampaignClass * ptr_18;  // 0x18
    MSShapeAnim * ptr_24;  // 0x36
// --- flat members (END) ---
    int EnableOnce(char aP1, void *a2 = 0);  // 0x554A60
    MSShapeAnim * * initTrigger(char **aP1, int aP2, int a4, int a5, int a6, int a7, int aP7);  // 0x5CBD20
    void ProcessMapEvents(int *a1, int * a2, int a3, int a4, char a5, char a6);    // 0x76D4D0
    unsigned int *  processTrigger(int a2, int a3);  // 0x76F090
    unsigned int * checkCondition(int aP1, int aP2, void *a3 = 0);  // 0x76F1C0
    int executeActions(int a2, void *a2_1 = 0);  // 0x76FF20
    char __pad_30[24];  // 0x30 (ml)
    unsigned int q008;  // 0x8 (offset-truth)
CampaignClass* q018;  // 0x18 [X35-L7 kind=CampaignClass*]
    unsigned int u32_444;  // 0x444 (offset-truth)
    unsigned int u32_45C;  // 0x45C (offset-truth)
    unsigned int u32_46C;  // 0x46C (offset-truth)
    unsigned int u32_470;  // 0x470 (offset-truth)
    unsigned int u32_478;  // 0x478 (offset-truth)
    unsigned int u32_84;  // 0x84 (offset-truth)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned char __pad_008;  // X10 supply (csp_canon_members)
    unsigned char __pad_458;  // X10 supply (member_lookup)
    unsigned char q00C;  // X10 supply (member_lookup)
    int q010;  // X10 supply (member_lookup)
    unsigned int q020;  // X10 supply (member_lookup)
    MSShapeAnim * q024;  // X10 supply (member_lookup)
    int q02C;  // X10 supply (member_lookup)
    int q048;  // X10 supply (member_lookup)
    unsigned int u32_28;  // X10 supply (member_lookup)
    unsigned int u32_38;  // X10 supply (member_lookup)
    char u8_4706;  // X10 supply (member_lookup)
    unsigned int u32_44;  // 0x44
    unsigned int q040;  // 0x40
    bool u32_3C;  // 0x3C
    unsigned char __pad_01C;  // 0x1C [X30:canon]
    unsigned char __pad_03A;  // 0x3A [X30:canon]
    ComPtr* ComPtr_488;  // 0x488 [X30:member_lookup]
    int Trigger_field_0x2C;  // 0x2C [X30:member_lookup]
MSAnim* Trigger_field_0x4;  // 0x4 [X35-L7 kind=MSAnim*]
    char __pad_0[4];  // 0x0 [X30:member_lookup]
    unsigned char __pad_494;  // 0x494 [X30:member_lookup]
    char __pad_8[8];  // 0x8 [X30:member_lookup]
    char u8_474;  // 0x474 [X30:member_lookup]
};
} // namespace gamemd
