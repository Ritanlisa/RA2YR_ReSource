#pragma once
// CSP: TacticalMap

class TacticalMap {
public:
    uint8_t pad_0[422]; // +0x0
    uint32_t member_1A6; // +0x1A6
    // 0x00484680
    void ComputeScreenTint();
    // 0x005D49A0
    void DrawCursor();
    // 0x007BCFB0
    void FillScanlinesOpaque();
    // 0x004F4480
    void Redraw();
};
