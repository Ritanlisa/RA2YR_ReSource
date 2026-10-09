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
    void* Fla_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon Power::Fla is a method)
    static unsigned int Fla(...);  // w18j3 C2597 static-call supply (w16g4 convention)
    void* a2;  // 0x0 (no offset truth)
    static int FlagProcess(Power *pThis, int a2);  // G57w19k2 C2661 supply (raw thiscall form; arity per verbatim raw call sites)
    int Update(int * a2, void *a2_2, void *a3_1, void *a4_1);  // 0x43A5D0
    unsigned int * UpdateAll();  // 0x67C6E0
    void* ComputeHousePowerChecksum(unsigned int * a2, void *a2_2);  // 0x68B940
    int FinalizeDrain(int a2);  // 0x4A1C10
    int FlagProcess(int Power_field_0x8);
    static int TimerProcess(int a1);
    char ChangedHouse(char a2);  // 0x750090
    int FlagProcess(int Power_field_0x8, int a2, int a1);
};
} // namespace gamemd
