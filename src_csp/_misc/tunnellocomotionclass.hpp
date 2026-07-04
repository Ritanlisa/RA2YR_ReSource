#pragma once
// CSP: TunnelLocomotionClass

class TunnelLocomotionClass : public LocomotionClass {
public:
    uint8_t pad_0[2908]; // +0x0
    uint32_t member_B5C; // +0xB5C
    // 0x0072A150
    void BeginMove();
    // 0x00728C00
    void ProcessFormationPosition();
    // 0x0072A200
    void StubReturn60();
    // 0x0072A110
    void ddtor();
};
