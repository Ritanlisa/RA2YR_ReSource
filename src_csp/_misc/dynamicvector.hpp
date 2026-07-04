#pragma once
// CSP: DynamicVector

class DynamicVector {
public:
    uint8_t pad_0[236]; // +0x0
    uint32_t member_EC; // +0xEC
    // 0x006C6400
    void Add();
    // 0x0042F670
    void Constructor_Cell();
    // 0x0067A520
    void Read();
    // 0x0067A6E0
    void Read_Alt();
    // 0x0067C360
    void RemoveAt();
    // 0x0067C3F0
    void RemoveAt2();
};
