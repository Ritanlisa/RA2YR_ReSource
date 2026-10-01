// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Radar {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    unsigned int u32_8;  // 0x8
    void* q00C;  // 0xC
    unsigned char u8_D;  // 0xD
    unsigned char q010;  // 0x10
    void* q014;  // 0x14
    unsigned int u32_18;  // 0x18
    void* q01C;  // 0x1C
    void* q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    void* q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    void* q048;  // 0x48
    unsigned char q04C;  // 0x4C
    void* q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void* q060;  // 0x60
    unsigned char q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    void* q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned int u32_F4;  // 0xF4
    unsigned int u32_F8;  // 0xF8
    unsigned char q0FC;  // 0xFC
    unsigned char q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char q108;  // 0x108
    void* q114;  // 0x114
    unsigned char q118;  // 0x118
    unsigned char q11C;  // 0x11C
    void* q128;  // 0x128
    unsigned char q12C;  // 0x12C
    unsigned char q130;  // 0x130
    unsigned char q134;  // 0x134
    void* q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char q174;  // 0x174
    unsigned char q178;  // 0x178
    void* q20C;  // 0x20C
    unsigned int Radar_field_0x60;
    unsigned int Radar_field_0xC;
    unsigned int *__pad_0;
    unsigned int __pad_64;
    unsigned int *__pad_34;
// --- flat members (END) ---
    int  FindNearestRadarTarget(int a2, int a3, int a4);  // 0x431090
    void  UpdateReveal(char a1, void * aP1);  // 0x4ADCD0
    bool IsRadarTargetEligible();  // 0x5090F0
    void*  ProcessSubzone(void * aP1, void * aP2, void * aP3, void * aP4, void * aP5);  // 0x5824A0
    void  Update(void * aP1, void *a1 = 0, void *a2 = 0, void *a3 = 0);  // 0x584550
    int *  CopyDataArray(int * a2);  // 0x58ABD0
    int PixelIndex();  // 0x6558B0
    char RenderMinimap();  // 0x656EC0
    int  ScanWaypoints(void * aP0, void * aP1, int aP3_4);  // 0x692610
};
} // namespace gamemd
