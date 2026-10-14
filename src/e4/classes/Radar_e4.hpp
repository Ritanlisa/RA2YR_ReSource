// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MapClass;  // fix_fwd_type_supply
struct Radar {
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

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned char __pad_1248;  // X10 supply (member_lookup)
    void* q004;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    unsigned char q010[4];  /* char[4] */  // X10 supply (member_lookup)
    int q014;  // X10 supply (member_lookup)
    int q060;  // X10 supply (member_lookup)
    int q20C;  // X10 supply (member_lookup)
    unsigned int u32_11E4;  // X10 supply (member_lookup)
    unsigned int u32_11EC;  // X10 supply (member_lookup)
    unsigned int u32_1208;  // X10 supply (member_lookup)
    unsigned int u32_120C;  // X10 supply (member_lookup)
    unsigned int u32_1210;  // X10 supply (member_lookup)
    unsigned int u32_1214;  // X10 supply (member_lookup)
    unsigned int u32_121C;  // X10 supply (member_lookup)
    unsigned int u32_1220;  // X10 supply (member_lookup)
    unsigned int u32_1234;  // X10 supply (member_lookup)
    unsigned int u32_124C;  // X10 supply (member_lookup)
    unsigned int u32_1250;  // X10 supply (member_lookup)
    unsigned int u32_1254;  // X10 supply (member_lookup)
    unsigned int u32_125C;  // X10 supply (member_lookup)
    unsigned int u32_1260;  // X10 supply (member_lookup)
    unsigned int u32_126C;  // X10 supply (member_lookup)
    unsigned int u32_1274;  // X10 supply (member_lookup)
    unsigned int u32_1488;  // X10 supply (member_lookup)
    unsigned int u32_1490;  // X10 supply (member_lookup)
    unsigned int u32_1498;  // X10 supply (member_lookup)
    unsigned int u32_149C;  // X10 supply (member_lookup)
    unsigned int u32_14A0;  // X10 supply (member_lookup)
    unsigned int u32_14A4;  // X10 supply (member_lookup)
    unsigned int u32_14A8;  // X10 supply (member_lookup)
    unsigned int u32_14AC;  // X10 supply (member_lookup)
    unsigned int u32_14B0;  // X10 supply (member_lookup)
    unsigned int u32_14D9;  // X10 supply (member_lookup)
    unsigned int u32_14DA;  // X10 supply (member_lookup)
    unsigned int u32_14DC;  // X10 supply (member_lookup)
    unsigned int u32_14E0;  // X10 supply (member_lookup)
    unsigned int u32_14E4;  // X10 supply (member_lookup)
    unsigned int u32_14E8;  // X10 supply (member_lookup)
    unsigned int u32_14EC;  // X10 supply (member_lookup)
    unsigned int u32_14F0;  // X10 supply (member_lookup)
    unsigned int u32_14F4;  // X10 supply (member_lookup)
    unsigned int u32_14F8;  // X10 supply (member_lookup)
    unsigned char u32_761[4];  /* void */  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
    unsigned int u32_89;  // X10 supply (member_lookup)
    unsigned int u32_F4;  // X10 supply (member_lookup)
    unsigned int u32_F8;  // X10 supply (member_lookup)
};
} // namespace gamemd
