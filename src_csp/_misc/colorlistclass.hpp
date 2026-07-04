#pragma once
// CSP: ColorListClass

class ColorListClass {
public:
    uint8_t pad_0[981]; // +0x0
    uint32_t member_3D5; // +0x3D5
    // 0x004888B0
    void AddColor();
    // 0x00557F40
    void Clear();
    // 0x00488EE0
    void GetColor();
    // 0x00488910
    void GetCount();
    // 0x00557AE0
    void SetColor();
    // 0x00488960
    void SetIndex();
};
