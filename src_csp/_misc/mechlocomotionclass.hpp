#pragma once
// CSP: MechLocomotionClass

class MechLocomotionClass : public LocomotionClass {
public:
    uint8_t pad_0[861]; // +0x0
    uint32_t member_35D; // +0x35D
    // 0x005B19A0
    void BeginMove();
    // 0x006D4B50
    void Start();
    // 0x005B1B40
    void StubReturn52();
    // 0x005B1960
    void ddtor();
};
