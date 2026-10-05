// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Color;  // fix_fwd_type_supply
struct Rules {
// --- flat members (BEGIN) ---
    unsigned char __pad_0[87];  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char __tail_10;  // 0xA
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int q020;  // 0x20
    unsigned int q034;  // 0x34
    unsigned int q050;  // 0x50
    unsigned int q080;  // 0x80
    unsigned int q128;  // 0x128
    unsigned int q130;  // 0x130
    unsigned int m_C;  // 0xC
    unsigned int DetailBufferZoneWidth;
    unsigned int DetailMinFrameRateMovie;
    unsigned int DetailMinFrameRateNormal;
    unsigned int PoseDir;
    unsigned int SpySatDeactivationSound;
    unsigned int UpgradeVeteranSound;
    unsigned int BunkerWallsUpSound;
    unsigned int EnterBioReactorSound;
// --- flat members (END) ---
    int ReadMiscINI();  // 0x6691E0
    IUnknown * * ReadCombatINI();  // 0x66BBB0
    unsigned int * CopyDataArray(VectorClass_flat * aP1);  // 0x67A570
    char * GetProductionTimeMult(int a2);  // 0x5FB2E0
    unsigned char m_5[64];  // pad compile-supply (G41.47)
    unsigned char m_1[64];  // pad compile-supply (G41.47)
};
} // namespace gamemd
