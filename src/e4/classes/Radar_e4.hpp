// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MapClass;  // fix_fwd_type_supply
struct Radar {
    char __pad_0[2];  // 0x0
    char Radar_field_0x2[4];  // 0x2
    char Radar_field_0x6[4];  // 0x6
    char __pad_A[2];  // 0xA
    unsigned int Radar_field_0xC;  // 0xC
    unsigned char q010[4];  // 0x10
    unsigned int Radar_field_0x14;  // 0x14
    int Radar_field_0x18;  // 0x18
    unsigned int Radar_field_0x1C;  // 0x1C
    int Radar_field_0x20;  // 0x20
    char __pad_24[12];  // 0x24
    int Radar_field_0x30;  // 0x30
    char __pad_34[32];  // 0x34
    unsigned int q054;  // 0x54
    char __pad_58[8];  // 0x58
    int Radar_field_0x60;  // 0x60
    char __pad_64[4];  // 0x64
    unsigned int q068;  // 0x68
    unsigned int q06C;  // 0x6C
    unsigned int q070;  // 0x70
    char __pad_74[28];  // 0x74
    unsigned int q090;  // 0x90
    char __pad_94[96];  // 0x94
    unsigned int u32_F4;  // 0xF4
    unsigned int u32_F8;  // 0xF8
    char __pad_FC[272];  // 0xFC
    unsigned int Radar_field_0x20C;  // 0x20C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int  FindNearestRadarTarget(int a2, int a3, int a4);  // 0x431090
    void UpdateReveal(char a1, IUnknown * aP1);  // G57w10-S raw 0x004ADCD0 IUnknown 占位清除
    int IsRadarTargetEligible();  // 0x5090F0
    void* ProcessSubzone(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5);  // G57w10-S raw 0x005824A0 IUnknown 占位清除
    AbstractClass * * Update(int16_t *aP1, void *a2 = 0, void *a3 = 0, void *a4 = 0);  // 0x584550
    void * CopyDataArray(int * a2, void *a2_1 = 0);  // 0x58ABD0
    int PixelIndex();  // 0x6558B0
    MapClass * * RenderMinimap();  // 0x656EC0
    AbstractClass * * ScanWaypoints(MouseClass * aP0, MouseClass * aP1, int aP3_4);  // 0x692610
};
} // namespace gamemd
