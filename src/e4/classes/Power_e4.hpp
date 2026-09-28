// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Power {
// --- flat members (BEGIN) ---
    unsigned int q000;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
// --- flat members (END) ---
    int Update(int * a2);  // 0x43A5D0
    unsigned int * UpdateAll();  // 0x67C6E0
    void* ComputeHousePowerChecksum(unsigned int * a2);  // 0x68B940
    int FinalizeDrain(int a2);  // 0x4A1C10
    int FlagProcess(int a2);  // 0x4A1CA0
    int TimerProcess();  // 0x4A1D50
    char ChangedHouse(char a2);  // 0x750090
};
} // namespace gamemd
