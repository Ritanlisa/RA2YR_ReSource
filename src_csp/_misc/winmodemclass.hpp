#pragma once
// CSP: WinModemClass

class WinModemClass {
public:
    uint8_t pad_0[104]; // +0x0
    uint32_t member_68; // +0x68
    uint8_t pad_6C[92]; // +0x6C
    uint32_t member_C8; // +0xC8
    // 0x007748B0
    void GetClassIdentifier();
    // 0x007754B0
    void HangUp();
    // 0x00774900
    void Init();
    // 0x007748A0
    void Release();
    // 0x00774C70
    void WriteSerial();
    // 0x007754A0
    void ddtor();
};
