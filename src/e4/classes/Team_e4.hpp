// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Team {
// --- flat members (BEGIN) ---
    unsigned int ClosestMember;  // 0x38
    unsigned int IsTransient;  // 0x74
    unsigned int NeedsReGrouping;  // 0x75
    unsigned int GuardSlowerIsNotUnderStrength;  // 0x76
    unsigned int IsForcedActive;  // 0x77
    unsigned int IsFullStrength;  // 0x79
    unsigned int TargetNotAssigned;  // 0x81
    unsigned int IsLeavingMap;  // 0x82
// --- flat members (END) ---
    int ReleaseAll(int aP1);  // 0x5D26C0
    int  GetMember(int a2, void *a1 = 0);  // 0x65AD30
    int AllMembersValid();
    unsigned int *q000;  // 0x0 (canon-mt)
};
} // namespace gamemd
