// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Team {
    unsigned int * q000;  // 0x0
    char __pad_4[24];  // 0x4
    unsigned int u32_1C;  // 0x1C
    char __pad_20[8];  // 0x20
    unsigned int u32_28;  // 0x28
    char __pad_2C[12];  // 0x2C
    unsigned int ClosestMember;  // 0x38
    char __pad_3C[56];  // 0x3C
    unsigned int IsTransient;  // 0x74
    char __pad_78[1];  // 0x78
    unsigned char IsFullStrength;  // 0x79
    char __pad_7A[7];  // 0x7A
    unsigned char TargetNotAssigned;  // 0x81
    unsigned char IsLeavingMap;  // 0x82
    char __pad_83[97];  // 0x83
    void * field_E4;  // 0xE4
    void * field_E8;  // 0xE8
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int ReleaseAll(int aP1);  // 0x5D26C0
    int GetMember(int aP1, void *a2 = 0);  // 0x65AD30
    int AllMembersValid();
};
} // namespace gamemd
