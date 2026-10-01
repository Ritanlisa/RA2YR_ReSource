// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Power {
// --- flat members (BEGIN) ---
    unsigned int q000;  // 0x0
    unsigned int q4;  // 0x4
    unsigned int q8;  // 0x8
    void* q00C;  // 0xC
    unsigned int u32_11E8;
    unsigned int u32_11F0;
    unsigned int u32_1218;
    unsigned int u32_1220;
    unsigned int u32_1224;
    unsigned int u32_122C;
    unsigned int u32_1230;
    unsigned int u32_1238;
    unsigned int u32_123C;
    unsigned int u32_1244;
    unsigned int u32_1258;
    unsigned int u32_1434;
    unsigned int u32_1438;
    unsigned int u32_143C;
    unsigned int u32_1440;
    unsigned int u32_1444;
    unsigned int u32_1448;
    unsigned int u32_144C;
    unsigned int u32_1C70;
    unsigned int u32_1C74;
    unsigned int u32_1C78;
    unsigned int u32_1C7C;
    unsigned int u32_1C80;
    unsigned int u32_1C84;
    unsigned int u32_34A0;
    unsigned int u32_34CC;
    unsigned int u32_34D0;
    unsigned int u32_3540;
    unsigned int u32_3544;
    unsigned int u32_3548;
    unsigned int u32_354C;
    unsigned int u32_60C;
    unsigned int u32_610;
    unsigned int u32_614;
    unsigned int u32_61C;
    unsigned int u32_7E40;
    unsigned char u8_34A4;
    unsigned char u8_34AC;
    unsigned char u8_34AD;
    unsigned char u8_34AE;
    unsigned char u8_34AF;
    unsigned char u8_34B0;
    unsigned char u8_34B1;
    unsigned char u8_34B2;
    unsigned char u8_34B4;
    unsigned char u8_34BC;
    unsigned int Power_field_0x0;
    unsigned int Power_field_0x4;
    unsigned int Power_field_0xC;
    unsigned int u32_3528;
    unsigned int u32_352C;
    unsigned int u32_3530;
    unsigned int u32_3550;
    unsigned int u32_3554;
    unsigned int u32_3558;
    unsigned int u32_355C;
    unsigned int q004;
    unsigned int q008;
    unsigned int Timer;
    unsigned char Power_field_0x8;  // 0x8
// --- flat members (END) ---
    int Update(int * a2, void *a2_2, void *a3_1, void *a4_1);  // 0x43A5D0
    unsigned int * UpdateAll();  // 0x67C6E0
    void* ComputeHousePowerChecksum(unsigned int * a2, void *a2_2);  // 0x68B940
    int FinalizeDrain(int a2, void *a2_2);  // 0x4A1C10
    int FlagProcess(int a2, int a2_2);  // 0x4A1CA0
    int TimerProcess(int a1_1);
    char ChangedHouse(char a2, void *a2_2);  // 0x750090
};
} // namespace gamemd
