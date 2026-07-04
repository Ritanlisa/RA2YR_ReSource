#pragma once
// CSP: GaugeClass

class GaugeClass {
public:
    uint8_t pad_0[680]; // +0x0
    uint32_t member_2A8; // +0x2A8
    // 0x004E30B0
    void Draw();
    // 0x004E25D0
    void GetRange();
    // 0x004E25A0
    void GetValue();
    // 0x004E2650
    void SetColor();
    // 0x004E29A0
    void SetRange();
    // 0x004E2580
    void SetValue();
    // 0x004E30A0
    void Stub();
};
