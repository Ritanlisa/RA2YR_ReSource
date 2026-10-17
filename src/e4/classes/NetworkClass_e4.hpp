// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct NetworkClass {
    char __pad_0[4];  // 0x0
    void* q004;  // 0x4
    char __pad_8[1784];  // 0x8
    void* q700;  // 0x700
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int ExecutePlanningModeCmd();  // 0x639FD0
    AbstractClass * * RecordEvent();  // 0x6FFE00
    AnimClass * * UnregisterAsync();  // 0x7B1C50
};
} // namespace gamemd
