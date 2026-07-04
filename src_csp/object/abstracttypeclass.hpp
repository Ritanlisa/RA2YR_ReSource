#pragma once
// CSP: AbstractTypeClass

class AbstractTypeClass : public AbstractClass {
public:
    uint8_t pad_0[238]; // +0x0
    uint32_t member_EE; // +0xEE
    // 0x005F75B0
    void GetData();
    // 0x005F7610
    void GetType();
    // 0x005F7620
    void SetType();
    // 0x00410C20
    void StubReturnFalse();
    // 0x005F7630
    void Validate();
};
