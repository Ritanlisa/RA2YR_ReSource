// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MSAnim;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct MSShapeAnim;  // fix_fwd_type_supply
struct Trigger {
    unsigned int __pad_0;  // 0x0
    MSAnim* Trigger_field_0x4;  // 0x4
    unsigned int q008;  // 0x8
    unsigned char q00C;  // 0xC
    char __pad_D[3];  // 0xD
    int q010;  // 0x10
    int Trigger_field_0x14;  // 0x14
    CampaignClass* q018;  // 0x18
    unsigned char __pad_01C;  // 0x1C
    char __pad_1D[3];  // 0x1D
    unsigned int q020;  // 0x20
    MSShapeAnim * q024;  // 0x24
    unsigned int u32_28;  // 0x28
    int Trigger_field_0x2C;  // 0x2C
    char __pad_30[24];  // 0x30
    int q048;  // 0x48
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int EnableOnce(char aP1, void *a2 = 0);  // 0x554A60
    MSShapeAnim * * initTrigger(char **aP1, int aP2, int a4, int a5, int a6, int a7, int aP7);  // 0x5CBD20
    void ProcessMapEvents(int *a1, int * a2, int a3, int a4, char a5, char a6);    // 0x76D4D0
    unsigned int *  processTrigger(int a2, int a3);  // 0x76F090
    unsigned int * checkCondition(int aP1, int aP2, void *a3 = 0);  // 0x76F1C0
    int executeActions(int a2, void *a2_1 = 0);  // 0x76FF20
};
} // namespace gamemd
