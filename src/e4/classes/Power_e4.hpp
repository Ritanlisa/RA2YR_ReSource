// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Power {
    void * a2;  // 0x0
    int q004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    char __pad_10[1532];  // 0x10
    unsigned int u32_60C;  // 0x60C
    unsigned int u32_610;  // 0x610
    unsigned int u32_614;  // 0x614
    char __pad_618[4];  // 0x618
    unsigned int u32_61C;  // 0x61C
    char __pad_620[3016];  // 0x620
    unsigned int u32_11E8;  // 0x11E8
    char __pad_11EC[4];  // 0x11EC
    unsigned int u32_11F0;  // 0x11F0
    char __pad_11F4[36];  // 0x11F4
    unsigned int u32_1218;  // 0x1218
    char __pad_121C[4];  // 0x121C
    unsigned int u32_1220;  // 0x1220
    unsigned int u32_1224;  // 0x1224
    char __pad_1228[4];  // 0x1228
    unsigned int u32_122C;  // 0x122C
    unsigned int u32_1230;  // 0x1230
    char __pad_1234[4];  // 0x1234
    unsigned int u32_1238;  // 0x1238
    unsigned int u32_123C;  // 0x123C
    char __pad_1240[4];  // 0x1240
    unsigned int u32_1244;  // 0x1244
    char __pad_1248[16];  // 0x1248
    unsigned int u32_1258;  // 0x1258
    char __pad_125C[472];  // 0x125C
    unsigned int u32_1434;  // 0x1434
    unsigned int u32_1438;  // 0x1438
    unsigned int u32_143C;  // 0x143C
    unsigned int u32_1440;  // 0x1440
    unsigned int u32_1444;  // 0x1444
    unsigned int u32_1448;  // 0x1448
    unsigned int u32_144C;  // 0x144C
    char __pad_1450[2080];  // 0x1450
    unsigned int u32_1C70;  // 0x1C70
    unsigned int u32_1C74;  // 0x1C74
    unsigned int u32_1C78;  // 0x1C78
    unsigned int u32_1C7C;  // 0x1C7C
    unsigned int u32_1C80;  // 0x1C80
    unsigned int u32_1C84;  // 0x1C84
    char __pad_1C88[6168];  // 0x1C88
    unsigned int u32_34A0;  // 0x34A0
    unsigned char u8_34A4;  // 0x34A4
    char __pad_34A5[7];  // 0x34A5
    unsigned char u8_34AC;  // 0x34AC
    unsigned char u8_34AD;  // 0x34AD
    unsigned char u8_34AE;  // 0x34AE
    unsigned char u8_34AF;  // 0x34AF
    unsigned char u8_34B0;  // 0x34B0
    unsigned char u8_34B1;  // 0x34B1
    unsigned char u8_34B2;  // 0x34B2
    char __pad_34B3[1];  // 0x34B3
    unsigned char u8_34B4;  // 0x34B4
    char __pad_34B5[7];  // 0x34B5
    unsigned char u8_34BC;  // 0x34BC
    char __pad_34BD[15];  // 0x34BD
    unsigned int u32_34CC;  // 0x34CC
    unsigned int u32_34D0;  // 0x34D0
    char __pad_34D4[84];  // 0x34D4
    unsigned int u32_3528;  // 0x3528
    unsigned int u32_352C;  // 0x352C
    unsigned int u32_3530;  // 0x3530
    char __pad_3534[12];  // 0x3534
    unsigned int u32_3540;  // 0x3540
    unsigned int u32_3544;  // 0x3544
    unsigned int u32_3548;  // 0x3548
    unsigned int u32_354C;  // 0x354C
    unsigned int u32_3550;  // 0x3550
    unsigned int u32_3554;  // 0x3554
    unsigned int u32_3558;  // 0x3558
    unsigned int u32_355C;  // 0x355C
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
