#pragma once
// CSP: HoverLocomotionClass

class HoverLocomotionClass : public LocomotionClass {
public:
    uint8_t pad_0[208]; // +0x0
    uint32_t member_D0; // +0xD0
    // 0x005170B0
    void BeginMove();
    // 0x005172B0
    void StubReturn120();
    // 0x00517070
    void ddtor();
};
