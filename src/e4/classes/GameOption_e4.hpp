// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GameOption {
    char __pad_0[9];  // 0x0
    unsigned char u32_9;  // 0x9
    char __pad_A[6];  // 0xA
    unsigned int u32_10;  // 0x10
    char __pad_14[32];  // 0x14
    unsigned int q034;  // 0x34
    char __pad_38[28];  // 0x38
    unsigned int q054;  // 0x54
    char __pad_58[18];  // 0x58
    unsigned char q06A;  // 0x6A
    char __pad_6B[2];  // 0x6B
    unsigned char q06D;  // 0x6D
    char __pad_6E[22];  // 0x6E
    unsigned int q084;  // 0x84
    unsigned int u32_88;  // 0x88
    char __pad_8C[8];  // 0x8C
    unsigned int u32_94;  // 0x94
    char __pad_98[20];  // 0x98
    unsigned int u32_AC;  // 0xAC
    char __pad_B0[128];  // 0xB0
    unsigned int q130;  // 0x130
    char __pad_134[20];  // 0x134
    unsigned int q148;  // 0x148
    char __pad_14C[47];  // 0x14C
    bool q17B;  // 0x17B
    char __pad_17C[16];  // 0x17C
    unsigned int field_18C;  // 0x18C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static char CheckDuplicate();  // x4:empty@0x5e9560
    int GetField(void *a1 = 0, void *a2 = 0);
    int SetDescriptionWStr(wchar_t * Destination, CampaignScore * aP1);
    void * SetDigest(char *aP1, void *a2 = 0);
};

} // namespace gamemd
