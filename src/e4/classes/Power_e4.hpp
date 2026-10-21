// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Power {
    void* a2;  // 0x0
    int Power_field_0x4;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Update(int * a2, void *a2_2, void *a3_1, void *a4_1);  // 0x43A5D0
    unsigned int * UpdateAll();  // 0x67C6E0
    int ComputeHousePowerChecksum(unsigned int * a2, void *a2_2 = 0);  // 0x68B940
    int FinalizeDrain(int a2, void *a2_1 = 0);  // 0x4A1C10
    int FlagProcess(int Power_field_0x8);
    static int TimerProcess(int a1);
    char ChangedHouse(char a2);  // 0x750090
};
} // namespace gamemd
