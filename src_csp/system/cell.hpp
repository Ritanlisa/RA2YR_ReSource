#pragma once
// CSP: Cell

class Cell {
public:
    uint8_t pad_0[21732]; // +0x0
    uint32_t member_54E4; // +0x54E4
    // 0x005A9940
    void Clear();
    // 0x0056CB80
    void DecodeFlags();
    // 0x00578080
    void GetGroundHeight();
    // 0x004265B0
    void GetHeight();
    // 0x00487CB0
    void GetTraversability();
    // 0x00578AD0
    void IsPassableAllied();
    // 0x006B5F80
    void IsWalkable();
    // 0x0056BC50
    void PosToLinearIndex();
    // 0x0056D460
    void SetRadar();
};
