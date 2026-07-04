#pragma once
// CSP: IPersistStream

class IPersistStream {
public:
    uint8_t pad_0[4668]; // +0x0
    uint32_t member_123C; // +0x123C
    // 0x005B2EF0
    void GetMaxSize();
    // 0x0070C250
    void GetSizeMax();
    // 0x007099D0
    void IsDirty();
    // 0x005B36E0
    void SetField();
    // 0x005B2E50
    void StubReturn450();
    // 0x005B3A50
    void StubReturnFalse();
};
