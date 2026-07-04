#pragma once
// CSP: XSurface

class XSurface : public Surface {
public:
    uint8_t pad_0[12]; // +0x0
    uint32_t member_C; // +0xC
    // 0x007BBAF0
    void BlitWhole();
    // 0x007BA8C0
    void DrawDashedLine();
    // 0x007BB350
    void DrawEllipseOutline();
    // 0x007BA5E0
    void DrawLine();
    // 0x007BA610
    void DrawLineEx();
    // 0x007BAD90
    void DrawRect();
    // 0x007BADC0
    void DrawRectEx();
    // 0x007BBAB0
    void Fill();
    // 0x007BAE60
    void GetPixel();
    // 0x007BAF10
    void GetPixelAtCoords();
    // 0x00411560
    void Lock();
    // 0x007BAF90
    void PutPixel();
    // 0x007BAEB0
    void SetPixel();
    // 0x00411590
    void StubReturnFalse();
    // 0x00411570
    void Unlock();
    // 0x007BAB90
    void WalkLine();
    // 0x007BB340
    void entry_1C_();
    // 0x007BAB50
    void entry_34_();
    // 0x007BAB60
    void entry_38_();
    // 0x007BAB70
    void entry_3C_();
    // 0x007BAB80
    void entry_40_();
    // 0x007BAB30
    void entry_4C_();
    // 0x007BAB40
    void entry_50_();
    // 0x00411500
    void entry_68_();
    // 0x00410600
    void vt_entry_40();
    // 0x004C9150
    void vt_entry_68();
};
