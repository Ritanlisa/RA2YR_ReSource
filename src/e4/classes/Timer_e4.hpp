// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Timer {
// --- flat members (BEGIN) ---
    unsigned int u32_4;  // 0x4
    AbstractClass * ptr_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int q018;  // 0x18
    unsigned int q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int q034;  // 0x34
    unsigned int u32_4C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int u32_60;  // 0x60
    unsigned int u32_64;  // 0x64
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int q100;  // 0x100
    unsigned int q118;  // 0x118
    unsigned int q128;  // 0x128
    unsigned int q130;  // 0x130
    unsigned int q150;  // 0x150
    unsigned int q280;  // 0x280
    unsigned int q304;  // 0x304
    unsigned int u32_314;  // 0x314
    unsigned int u32_318;  // 0x318
    unsigned int q598;  // 0x598
    unsigned int q640;  // 0x640
    unsigned int q774;  // 0x774
    unsigned int q788;  // 0x788
    unsigned int q1600;  // 0x1600
    unsigned int q1634;  // 0x1634
    unsigned int q1908;  // 0x1908
    unsigned int q1928;  // 0x1928
    unsigned int q1938;  // 0x1938
    unsigned int q5170;  // 0x5170
    unsigned int q5684;  // 0x5684
    unsigned int q6408;  // 0x6408
    unsigned int q6440;  // 0x6440
    void* ptr_84;
    void* ptr_85;
    unsigned int q04C7;
    unsigned int q04C8;
// --- flat members (END) ---
    DynamicVector * Start(DynamicVector * aP1);  // 0x46B640
    char StartDouble(double a2);  // 0x4A5240
    DWORD * Init(DWORD a2);  // 0x4F1B00
    int GetRemainingMs();  // 0x4F1B20
    HWND PumpMessages();  // 0x54F720
    double GetHighPrecision();  // 0x5B1E40
    int GetElapsed();  // 0x5F1390
    void * EnableHighPrecision();  // 0x5D5870
    MMRESULT DisableHighPrecision();  // 0x5D5880
    int UpdateDelta();  // 0x6C8820
    DWORD GetTicks();  // 0x6C8C40
    char SetFlag(char a2);  // 0x7500B0
    unsigned long long ReadTSC(unsigned int * a1);  // 0x7C6064
};
} // namespace gamemd
