#pragma once
// CSP: StringVector

class StringVector {
public:
    uint8_t pad_0[21724]; // +0x0
    uint32_t member_54DC; // +0x54DC
    // 0x0049EF40
    void Add();
    // 0x0049EE60
    void Release();
    // 0x0049EF80
    void Remove();
    // 0x0049EF10
    void ddtor();
};
