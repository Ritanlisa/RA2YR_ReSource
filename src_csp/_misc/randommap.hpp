#pragma once
// CSP: RandomMap

class RandomMap {
public:
    uint8_t pad_0[2364]; // +0x0
    uint32_t member_93C; // +0x93C
    // 0x0042F620
    void AddRef();
    // 0x005AD820
    void Constructor();
    // 0x005ADA40
    void Constructor_0();
    // 0x005ADAB0
    void Constructor_1();
    // 0x0058D1C0
    void ExpandTerrainCells();
    // 0x0042F930
    void Read();
    // 0x0042F470
    void Seek();
    // 0x0042F450
    void Write();
    // 0x0042F420
    void ddtor();
};
