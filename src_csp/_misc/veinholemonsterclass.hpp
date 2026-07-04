#pragma once
// CSP: VeinholeMonsterClass

class VeinholeMonsterClass {
public:
    uint8_t pad_0[3608]; // +0x0
    uint32_t member_E18; // +0xE18
    // 0x0074EF00
    void CheckStatus();
    // 0x0074F320
    void StubReturn264();
    // 0x0074F310
    void StubReturn63();
    // 0x0074F2D0
    void ddtor();
};
