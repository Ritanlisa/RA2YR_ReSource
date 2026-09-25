// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Team {
// --- flat members (BEGIN) ---
    unsigned int u32_4;  // 0x4
    unsigned int u32_14;  // 0x14
    unsigned int u32_1C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int u32_28;  // 0x28
    unsigned int ClosestMember;  // 0x38
    unsigned int q040;  // 0x40
    unsigned int q050;  // 0x50
    unsigned int q064;  // 0x64
    unsigned int IsTransient;  // 0x74
    unsigned int NeedsReGrouping;  // 0x75
    unsigned int GuardSlowerIsNotUnderStrength;  // 0x76
    unsigned int IsForcedActive;  // 0x77
    unsigned int IsFullStrength;  // 0x79
    unsigned int q080;  // 0x80
    unsigned int TargetNotAssigned;  // 0x81
    unsigned int IsLeavingMap;  // 0x82
    void* q0E4;  // 0xE4
    void* q0E8;  // 0xE8
    unsigned int q100;  // 0x100
    unsigned int q118;  // 0x118
    unsigned int q128;  // 0x128
    unsigned int q130;  // 0x130
    unsigned int q134;  // 0x134
    void* q228;  // 0x228
    unsigned int q278;  // 0x278
    unsigned int q280;  // 0x280
    unsigned int q304;  // 0x304
    unsigned int q308;  // 0x308
    unsigned int q598;  // 0x598
    unsigned int q640;  // 0x640
    void* q1378;  // 0x1378
    unsigned int q1600;  // 0x1600
    unsigned int q1910;  // 0x1910
    void* q4984;  // 0x4984
    unsigned int q5170;  // 0x5170
    unsigned int q5510;  // 0x5510
    unsigned int u32_147;
    unsigned int u32_148;
    unsigned int u32_40;
// --- flat members (END) ---
    int ReleaseAll(ObjectClass * aP1);  // 0x5D26C0
    int GetMember(AbstractClass * aP1);  // 0x65AD30
    char AllMembersValid();  // 0x65AE30
};
} // namespace gamemd
