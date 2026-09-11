// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct Radar {
    void* vfptr;  // minimal E2 declaration
    int FindNearestRadarTarget(int a2, int a3, int a4);  // 0x431090
    void UpdateReveal(char a1, IUnknown * aP1);  // 0x4ADCD0
    bool IsRadarTargetEligible();  // 0x5090F0
    int ProcessSubzone(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5);  // 0x5824A0
    void Update(IUnknown * aP1);  // 0x584550
    int * CopyDataArray(int * a2);  // 0x58ABD0
    int PixelIndex();  // 0x6558B0
    char RenderMinimap();  // 0x656EC0
    int ScanWaypoints(MouseClass * aP0, MouseClass * aP1, int aP3_4);  // 0x692610
};
} // namespace gamemd
