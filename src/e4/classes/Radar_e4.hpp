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
    unsigned char q00C;  // 0xC
    char __pad_D[3];  // 0xD
    unsigned int q010;  // 0x10
    int q014;  // 0x14
    int u32_18;  // 0x18
    unsigned int q01C;  // 0x1C
    int q020;  // 0x20
    char __pad_24[12];  // 0x24
    int q030;  // 0x30
    char __pad_34[32];  // 0x34
    unsigned int q054;  // 0x54
    char __pad_58[8];  // 0x58
    int q060;  // 0x60
    unsigned int q064;  // 0x64
    char __pad_68[140];  // 0x68
    unsigned char u32_F4;  // 0xF4
    char __pad_F5[3];  // 0xF5
    unsigned char u32_F8;  // 0xF8
    char __pad_F9[3];  // 0xF9
    char __pad_FC[272];  // 0xFC
    int q20C;  // 0x20C
    char __pad_210[4052];  // 0x210
    unsigned int u32_11E4;  // 0x11E4
    char __pad_11E8[4];  // 0x11E8
    unsigned int u32_11EC;  // 0x11EC
    char __pad_11F0[24];  // 0x11F0
    unsigned int u32_1208;  // 0x1208
    unsigned int u32_120C;  // 0x120C
    unsigned int u32_1210;  // 0x1210
    unsigned int u32_1214;  // 0x1214
    char __pad_1218[4];  // 0x1218
    unsigned int u32_121C;  // 0x121C
    char __pad_1220[44];  // 0x1220
    unsigned int u32_124C;  // 0x124C
    unsigned int u32_1250;  // 0x1250
    unsigned int u32_1254;  // 0x1254
    char __pad_1258[4];  // 0x1258
    unsigned int u32_125C;  // 0x125C
    unsigned int u32_1260;  // 0x1260
    char __pad_1264[8];  // 0x1264
    unsigned int u32_126C;  // 0x126C
    char __pad_1270[4];  // 0x1270
    unsigned int u32_1274;  // 0x1274
    char __pad_1278[528];  // 0x1278
    unsigned int u32_1488;  // 0x1488
    char __pad_148C[4];  // 0x148C
    unsigned int u32_1490;  // 0x1490
    char __pad_1494[4];  // 0x1494
    unsigned int u32_1498;  // 0x1498
    unsigned int u32_149C;  // 0x149C
    unsigned int u32_14A0;  // 0x14A0
    unsigned int u32_14A4;  // 0x14A4
    unsigned int u32_14A8;  // 0x14A8
    unsigned int u32_14AC;  // 0x14AC
    unsigned int u32_14B0;  // 0x14B0
    char __pad_14B4[37];  // 0x14B4
    unsigned char u32_14D9;  // 0x14D9
    unsigned char u32_14DA;  // 0x14DA
    char __pad_14DB[1];  // 0x14DB
    unsigned int u32_14DC;  // 0x14DC
    unsigned int u32_14E0;  // 0x14E0
    unsigned int u32_14E4;  // 0x14E4
    unsigned int u32_14E8;  // 0x14E8
    unsigned int u32_14EC;  // 0x14EC
    unsigned int u32_14F0;  // 0x14F0
    unsigned int u32_14F4;  // 0x14F4
    unsigned int u32_14F8;  // 0x14F8
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
