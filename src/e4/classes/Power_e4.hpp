// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Power {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    void* Fla_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon Power::Fla is a method)
    void* a2;  // 0x0 (no offset truth)
    static int FlagProcess(int Power_field_0x8);
    int Update(int * a2, void *a2_2, void *a3_1, void *a4_1);  // 0x43A5D0
    unsigned int * UpdateAll();  // 0x67C6E0
    void*  ComputeHousePowerChecksum(unsigned int * a2);  // 0x68B940
    int FinalizeDrain(int a2, void *a2_1 = 0);  // 0x4A1C10
    int FlagProcess(int Power_field_0x8);
    int TimerProcess(int a1);
    char ChangedHouse(char a2);  // 0x750090
    int FlagProcess(int q008, int a2, int a1);

    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    unsigned char q020;  // X10 supply (member_lookup)
    unsigned int u32_30;  // X10 supply (member_lookup)
};
} // namespace gamemd
