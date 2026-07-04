#pragma once
// CSP: Palette

class Palette {
public:
    uint8_t pad_0[8]; // +0x0
    uint32_t member_8; // +0x8
    uint8_t pad_C[32]; // +0xC
    uint32_t member_2C; // +0x2C
    // 0x004355B0
    void 6BitTo16Bit();
    // 0x00661350
    void CalcColorDistance();
    // 0x00632BE0
    void ConvertIndices();
    // 0x0072B820
    void LoadFile();
    // 0x00642130
    void Preview_Generate();
};
