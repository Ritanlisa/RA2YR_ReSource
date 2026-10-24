// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MSAnim;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct MSShapeAnim;  // fix_fwd_type_supply
struct Trigger {
    unsigned int __pad_0;  // 0x0
    void * ptr_4;  // 0x4
    unsigned int q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q00D;  // 0xD
    char __pad_E[2];  // 0xE
    int q010;  // 0x10
    int u32_14;  // 0x14
    void * ptr_18;  // 0x18
    char __pad_1C[4];  // 0x1C
    unsigned char q020;  // 0x20
    char __pad_21[3];  // 0x21
    unsigned char q024;  // 0x24
    char __pad_25[3];  // 0x25
    unsigned int u32_28;  // 0x28
    int q02C;  // 0x2C
    unsigned int q030;  // 0x30
    char __pad_34[4];  // 0x34
    unsigned short u32_38;  // 0x38
    char __pad_3A[2];  // 0x3A
    bool u32_3C;  // 0x3C
    char __pad_3D[3];  // 0x3D
    unsigned char q040;  // 0x40
    char __pad_41[3];  // 0x41
    unsigned char u32_44;  // 0x44
    char __pad_45[3];  // 0x45
    unsigned char q048;  // 0x48
    char __pad_49[1019];  // 0x49
    unsigned char u32_444;  // 0x444
    char __pad_445[23];  // 0x445
    unsigned int u32_45C;  // 0x45C
    char __pad_460[12];  // 0x460
    unsigned int u32_46C;  // 0x46C
    unsigned int u32_470;  // 0x470
    unsigned int u8_474;  // 0x474
    unsigned int u32_478;  // 0x478
    char __pad_47C[12];  // 0x47C
    unsigned int q488;  // 0x488
    unsigned int q48C;  // 0x48C
    char __pad_490[8];  // 0x490
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
