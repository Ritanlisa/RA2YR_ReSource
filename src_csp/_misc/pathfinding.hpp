#pragma once
// CSP: Pathfinding

class Pathfinding {
public:
    uint8_t pad_0[87]; // +0x0
    uint32_t member_57; // +0x57
    // 0x00583820
    void CheckCliff();
    // 0x00583180
    void CrossBridge();
    // 0x0042DCA0
    void SiftDown();
};
