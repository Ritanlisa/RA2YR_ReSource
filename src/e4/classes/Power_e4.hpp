// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Power {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    void* Fla_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon Power::Fla is a method)
    static unsigned int Fla(...);
    void* a2;  // 0x0 (no offset truth)
    static int FlagProcess(int Power_field_0x8);
    int  Update(int * a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x43A5D0
    unsigned int * UpdateAll();  // 0x67C6E0
    void*  ComputeHousePowerChecksum(unsigned int * a2);  // 0x68B940
    int  FinalizeDrain(int Power_field_0x8, void *a1 = 0);  // 0x4A1C10
    int FlagProcess(int Power_field_0x8);
    int TimerProcess(int a1);
    char ChangedHouse(char a2);  // 0x750090
    int FlagProcess(int Power_field_0x8, int a2, int a1);
    static double Power_field_0x4(...);  // plateau: C2039/C3861 stub
    static double Power_field_0xC(...);  // plateau: C2039/C3861 stub
    static double q008(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
