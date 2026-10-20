// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Timer {
#pragma pack(push, 1)  // X60: binary-packed layout
    char __pad_0[2];  // 0x0
    char m_2[4];  // 0x2
    char __pad_6[2];  // 0x6
    AbstractClass * ptr_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    int m_18;  // 0x18
    char __pad_1C[4];  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    char __pad_2C[4];  // 0x30
    unsigned int u32_34;  // 0x34
    char __pad_38[4];  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int u32_40;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int q050;  // 0x50
    char __pad_54[16];  // 0x54
    unsigned int u32_64;  // 0x64
    char __pad_68[93];  // 0x68
    unsigned int m_C5;  // 0xC5
    char tail_C9[3];  // 0xC9
// --- flat members (BEGIN) ---
// --- flat members (END) ---
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
#pragma pack(pop)
};
} // namespace gamemd
