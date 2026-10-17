// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Timer {
// --- flat members (BEGIN) ---
    unsigned int m_2;  // 0x2
    AbstractClass * ptr_8;  // 0x8
    int m_18;  // 0x18
    unsigned int m_C5;  // 0xC5
    unsigned int tail_C9;  // 0xC9
// --- flat members (END) ---
    unsigned int ReadTSC_ph;  // w18j3: filler renamed (no offset truth; canon Timer::ReadTSC is a method)
    unsigned long long ReadTSC(unsigned int * a1);  // x4:signals@0x7c6064
    void * Start(int aP1, void *a2 = 0);  // 0x46B640
    int  StartDouble(double a2);  // 0x4A5240
    DWORD * Init(DWORD a2, void *a2_1 = 0);  // 0x4F1B00
    int GetRemainingMs(void *a1 = 0);  // 0x4F1B20
    DWORD * PumpMessages(void *a1 = 0);  // 0x54F720
    int GetHighPrecision();  // 0x5B1E40
    int GetElapsed();  // 0x5F1390
    void * EnableHighPrecision();  // 0x5D5870
    MMRESULT DisableHighPrecision();  // 0x5D5880
    static int UpdateDelta();  // 0x6C8820
    static DWORD GetTicks();  // 0x6C8C40 [w16g2] static per raw __thiscall receiver-first
    char  SetFlag(char a2);  // 0x7500B0
    unsigned long  longReadTSC(unsigned int * a1);  // 0x7C6064
    char __pad_6[18];  // 0x6 (ml)
    unsigned int *q000;  // 0x0 (canon-mt)

    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_314;  // X10 supply (member_lookup)
    unsigned int u32_318;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)


    unsigned int __pad_1C;  // 0x1C [X55 W3 supply (render vocab)]
    unsigned int __pad_0;  // 0x0 [X55 W3 supply (render vocab)]
    unsigned int u32_48;  // 0x48 [X55 W3 supply (render vocab)]
    unsigned int u32_34;  // 0x34 [X55 W3 supply (render vocab)]
    unsigned int u32_64;  // 0x64 [X55 W3 supply (render vocab)]
    unsigned int q050;  // 0x50 [X55 W3 supply (render vocab)]
    unsigned int u32_40;  // 0x40 [X55 W3 supply (render vocab)]
    unsigned int u32_44;  // 0x44 [X55 W3 supply (render vocab)]
    unsigned int u32_28;  // 0x28 [X55 W3 supply (render vocab)]
    unsigned int q020;  // 0x20 [X55 W3 supply (render vocab)]
    unsigned int u32_24;  // 0x24 [X55 W3 supply (render vocab)]
    unsigned int u32_3C;  // 0x3C [X55 W3 supply (render vocab)]
};
} // namespace gamemd
