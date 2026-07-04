#pragma once
// CSP: SHA1

class SHA1 {
public:
    uint8_t pad_0[21728]; // +0x0
    uint32_t member_54E0; // +0x54E0
    // 0x0069D9E0
    void Compute();
    // 0x0069E9E0
    void ComputeThunk();
    // 0x0069D960
    void Process();
    // 0x0069D8C0
    void ProcessBlock();
    // 0x0069DB30
    void Transform();
};
