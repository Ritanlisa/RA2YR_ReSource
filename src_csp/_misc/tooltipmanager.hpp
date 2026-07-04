#pragma once
// CSP: ToolTipManager

class ToolTipManager {
public:
    uint8_t pad_0[396]; // +0x0
    uint32_t member_18C; // +0x18C
    uint8_t pad_190[20]; // +0x190
    uint32_t member_1A4; // +0x1A4
    uint8_t pad_1A8[4]; // +0x1A8
    uint32_t member_1AC; // +0x1AC
    uint8_t pad_1B0[4]; // +0x1B0
    uint32_t member_1B4; // +0x1B4
    uint8_t pad_1B8[12]; // +0x1B8
    uint32_t member_1C4; // +0x1C4
    uint8_t pad_1C8[4]; // +0x1C8
    uint32_t member_1CC; // +0x1CC
    // 0x00724AA0
    void addRef();
    // 0x00724B80
    void ddtor();
    // 0x00724BB0
    void read();
    // 0x00724AB0
    void release();
    // 0x00724BD0
    void stubReturnFalse();
};
