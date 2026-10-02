// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MSAnim;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct MSShapeAnim;  // fix_fwd_type_supply
struct Trigger {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    MSAnim * ptr_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char u8_D;  // 0xD
    void* q010;  // 0x10
    unsigned int u32_14;  // 0x14
    CampaignClass * ptr_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int q020;  // 0x20
    MSShapeAnim * q024;  // 0x24
    unsigned int u32_28;  // 0x28
    void* q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char u8_34;  // 0x34
    MSShapeAnim * ptr_24;  // 0x36
    unsigned int u32_38;  // 0x38
    unsigned char u8_3C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int u32_44;  // 0x44
    void* q048;  // 0x48
    unsigned int Trigger_field_0x10;
    unsigned int Trigger_field_0x2C;
    unsigned int Trigger_field_0x4;
    unsigned int Trigger_field_0x48;
    unsigned int *__pad_0;
    unsigned int *__pad_18;
    unsigned int *__pad_30;
    unsigned int *__pad_8;
    void* ptr_470;
    unsigned int q444;
    unsigned int u32_1250;
    unsigned int u32_1BC2;
    unsigned int u32_1C46;
    unsigned int u32_1C80;
    unsigned int u32_1D04;
    unsigned int u32_45C;
    unsigned int u32_46C;
    unsigned int u32_474;
    unsigned int u32_478;
    unsigned int u32_84;
    unsigned int Timer;
// --- flat members (END) ---
    int EnableOnce(char aP1);  // 0x554A60
    MSShapeAnim * * initTrigger(char **aP1, int aP2, int a4, int a5, int a6, int a7, int aP7);  // 0x5CBD20
    void ProcessMapEvents(int *a1, int * a2, int a3, int a4, char a5, char a6);    // 0x76D4D0
    unsigned int * processTrigger(int a2, int a3);  // 0x76F090
    unsigned int * checkCondition(int aP1, int aP2);  // 0x76F1C0
    int executeActions(int a2, void *a2_2);  // 0x76FF20
};
} // namespace gamemd
