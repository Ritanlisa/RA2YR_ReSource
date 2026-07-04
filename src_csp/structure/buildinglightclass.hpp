#pragma once
// CSP: BuildingLightClass

class BuildingLightClass : public ObjectClass {
public:
    uint8_t pad_0[352]; // +0x0
    uint32_t member_160; // +0x160
    // 0x006E2970
    void FindAllTargets();
    // 0x00436910
    void SD_vt03();
    // 0x00436950
    void SD_vt05();
    // 0x004370B0
    void SD_vt11();
    // 0x00436900
    void SD_vt12();
    // 0x00436F40
    void SD_vt13();
    // 0x004369F0
    void SD_vt30();
    // 0x004369E0
    void SD_vt34();
};
