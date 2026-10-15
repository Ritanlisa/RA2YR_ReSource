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

    unsigned int u32_3D0;  // X10 supply (member_lookup)
    unsigned int u32_3D4;  // X10 supply (member_lookup)
    unsigned int u32_3D8;  // X10 supply (member_lookup)
    unsigned int u32_3F06C;  // X10 supply (member_lookup)
    unsigned char u8_37C;  // X10 supply (member_lookup)
    unsigned char u8_8;  // X10 supply (member_lookup)
    unsigned int u32_3C0;  // 0x3C0
    unsigned int u32_3BC;  // 0x3BC
    unsigned int u32_3B8;  // 0x3B8
    unsigned int u32_3B4;  // 0x3B4
    unsigned int u32_3AC;  // 0x3AC
    unsigned int m_3F068;  // 0x3F068 [X30:default]
};
} // namespace gamemd
