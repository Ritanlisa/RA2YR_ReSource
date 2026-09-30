// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Mouse {
    // dup-member: unsigned int GetKeyState;
    // dup-member: unsigned int IsButtonDown;
    // dup-member: unsigned int ReleaseCapture;
    unsigned int DisplayClass;
    unsigned int Timer;
    unsigned int __pad_5;
    unsigned int m_1;
    unsigned int q048;
    unsigned int q04C;
    unsigned int q050;
    unsigned int q054;
    unsigned int u32_555A;
    unsigned int q008;
    unsigned int u32_48;
    unsigned int u32_49;
    unsigned int q0080;
    unsigned int q0081;
    unsigned int q555A;
    unsigned int u32_1174;
    unsigned int u32_1176;
    unsigned int u32_1178;
    unsigned int u32_117A;
    unsigned int u32_117C;
    unsigned int u32_4;
    unsigned int u32_555C;
    unsigned int u32_5560;
    unsigned int u32_5568;
    void* vfptr;  // minimal E2 declaration
    int  SetBounds(void * aP1);  // 0x4A8BF0
    char  SetCursor(void * aP1, void * aP2);  // 0x5BDC80
    HWND ReleaseCapture();  // 0x6938C0
    AbstractClass * *  DrawCursor(void * aP1, void * aP2, int a4);  // 0x7B93F0
    SHORT  GetKeyState(uint8_t vKey);  // 0x53EC90
    BOOL  IsButtonDown(uint8_t a1);  // 0x54F5C0
    HWND HideWindow();  // 0x5BC400
};
} // namespace gamemd
