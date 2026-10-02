// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct NetworkClass {
// --- flat members (BEGIN) ---
    void* q004;  // 0x4
    void* q700;  // 0x700
    void* q6034;  // 0x6034
    unsigned int u32_64D4;  // 0x64D4
    unsigned int u32_64D8;  // 0x64D8
    unsigned int u32_64D49;
    unsigned int u32_64D80;
// --- flat members (END) ---
    int ExecutePlanningModeCmd();  // 0x639FD0
    AbstractClass * * RecordEvent();  // 0x6FFE00
    AnimClass * * UnregisterAsync();  // 0x7B1C50
};
} // namespace gamemd
