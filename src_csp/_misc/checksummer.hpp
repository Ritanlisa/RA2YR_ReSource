#pragma once
// CSP: Checksummer

class Checksummer {
public:
    uint8_t pad_0[1748]; // +0x0
    uint32_t member_6D4; // +0x6D4
    void Add_WORD();
    void Add_double();
    void Add_float();
    void HashString();
};
