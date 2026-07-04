#pragma once
// CSP: MovementAI

class MovementAI {
public:
    uint8_t pad_0[16]; // +0x0
    uint32_t member_10; // +0x10
    uint8_t pad_14[12]; // +0x14
    uint32_t member_20; // +0x20
    uint8_t pad_24[12]; // +0x24
    uint32_t member_30; // +0x30
    // 0x004E19A0
    void ActivateGlobal();
    // 0x004C3570
    void Close();
    // 0x005163B0
    void MarkOccupiedPathCell();
};
