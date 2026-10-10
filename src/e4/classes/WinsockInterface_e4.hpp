// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once
#ifndef GAMEMD_E4_FLAT_WinsockInterface
#define GAMEMD_E4_FLAT_WinsockInterface 1  // G57c2: suppress minimal_carriers.hpp twin
#endif

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct WinsockInterface {
// --- flat members (BEGIN) ---
    unsigned int *m_1;  // 0x1
    HashTable * ptr_4;  // 0x4
    int m_18;  // 0x18
    unsigned int m_FC1B;  // 0xFC1B
// --- flat members (END) ---
    void *  ProcessPacket(int a2);  // 0x770270
    int Init(void *a1 = 0, void *a2 = 0);  // 0x7B1DE0
    unsigned char m_1[64];  // pad compile-supply (G41.47)
    unsigned int *q000;  // 0x0 (canon-mt)
    static double q092(...);  // plateau: C2039/C3861 stub
    static double q338(...);  // plateau: C2039/C3861 stub
    static double u32_1C(...);  // plateau: C2039/C3861 stub
    static double u32_3AC(...);  // plateau: C2039/C3861 stub
    static double u32_3B4(...);  // plateau: C2039/C3861 stub
    static double u32_3BC(...);  // plateau: C2039/C3861 stub
    static double u32_3C0(...);  // plateau: C2039/C3861 stub
    static double u32_3D0(...);  // plateau: C2039/C3861 stub
    static double u32_3D4(...);  // plateau: C2039/C3861 stub
    static double u32_3D8(...);  // plateau: C2039/C3861 stub
    static double u32_48(...);  // plateau: C2039/C3861 stub
    static double u32_60(...);  // plateau: C2039/C3861 stub
    static double u32_98(...);  // plateau: C2039/C3861 stub
    static double u32_C(...);  // plateau: C2039/C3861 stub
    static double u32_EE0(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
