// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once
#ifndef GAMEMD_E4_FLAT_WinsockInterface
#define GAMEMD_E4_FLAT_WinsockInterface 1  // G57c2: suppress minimal_carriers.hpp twin
#endif

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct WinsockInterface {
#pragma pack(push, 1)  // X60: binary-packed layout
    char __pad_0[1];  // 0x0
    char m_1[4];  // 0x1
    char __pad_5[3];  // 0x5
    unsigned char u8_8;  // 0x8
    char __pad_9[15];  // 0x9
    int m_18;  // 0x18
    char __pad_1C[864];  // 0x1C
    unsigned char u8_37C;  // 0x37C
    char __pad_37D[47];  // 0x37D
    unsigned int u32_3AC;  // 0x3AC
    char __pad_3B0[4];  // 0x3B0
    unsigned int u32_3B4;  // 0x3B4
    unsigned int u32_3B8;  // 0x3B8
    unsigned int u32_3BC;  // 0x3BC
    unsigned int u32_3C0;  // 0x3C0
    char __pad_3C4[12];  // 0x3C4
    unsigned int u32_3D0;  // 0x3D0
    unsigned int u32_3D4;  // 0x3D4
    unsigned int u32_3D8;  // 0x3D8
    char __pad_3DC[63551];  // 0x3DC
    unsigned int m_FC1B;  // 0xFC1B
    char __pad_FC1F[193609];  // 0xFC1F
    unsigned int m_3F068;  // 0x3F068
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    void *  ProcessPacket(int a2);  // 0x770270
    int Init(void *a1 = 0, void *a2 = 0);  // 0x7B1DE0
#pragma pack(pop)
};
} // namespace gamemd
