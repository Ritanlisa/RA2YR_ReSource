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
    int  EnableOnce(char a2, void *a1 = 0);  // 0x554A60
    MSShapeAnim * * initTrigger(char **aP1, int aP2, int a4, int a5, int a6, int a7, int aP7);  // 0x5CBD20
    void ProcessMapEvents(int *a1, int * a2, int a3, int a4, char a5, char a6);    // 0x76D4D0
    unsigned int *  processTrigger(int a2, int a3);  // 0x76F090
    unsigned int *  checkCondition(int a2, int a3, void *a1 = 0);  // 0x76F1C0
    int  executeActions(int a2, void *a1 = 0);  // 0x76FF20
    char __pad_30[24];  // 0x30 (ml)
    unsigned int q008;  // 0x8 (offset-truth)
    unsigned int q018;  // 0x18 (offset-truth)
    unsigned int u32_444;  // 0x444 (offset-truth)
    unsigned int u32_45C;  // 0x45C (offset-truth)
    unsigned int u32_46C;  // 0x46C (offset-truth)
    unsigned int u32_470;  // 0x470 (offset-truth)
    unsigned int u32_478;  // 0x478 (offset-truth)
    unsigned int u32_84;  // 0x84 (offset-truth)
};
} // namespace gamemd
