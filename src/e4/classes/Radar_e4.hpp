// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MapClass;  // fix_fwd_type_supply
struct Radar {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    int  FindNearestRadarTarget(int a2, int a3, int a4);  // 0x431090
    static int UpdateReveal(char a1, int a2);  // G57w10-S raw 0x004ADCD0 IUnknown 占位清除
    int IsRadarTargetEligible();  // 0x5090F0
    void* ProcessSubzone(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5);  // G57w10-S raw 0x005824A0 IUnknown 占位清除
    AbstractClass * * Update(int16_t *aP1, void *a1 = 0, void *a2 = 0, void *a3 = 0);  // 0x584550
    void *  CopyDataArray(int * a2, void *a1 = 0);  // 0x58ABD0
    int PixelIndex();  // 0x6558B0
    MapClass * * RenderMinimap();  // 0x656EC0
    AbstractClass * *  ScanWaypoints(int a1, void * a2, int a3);  // 0x692610
    static double Radar_field_0x20C(...);  // plateau: C2039/C3861 stub
    static double Radar_field_0x60(...);  // plateau: C2039/C3861 stub
    static double Radar_field_0xC(...);  // plateau: C2039/C3861 stub
    static double __pad_0(...);  // plateau: C2039/C3861 stub
    static double __pad_64(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
