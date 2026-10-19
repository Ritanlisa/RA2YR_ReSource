// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Mouse {
    char __pad_0[1];  // 0x0
    char m_1[4];  // 0x1
    char __pad_5[3];  // 0x5
    unsigned int u32_8;  // 0x8
    char __pad_C[6];  // 0xC
    char m_12[4];  // 0x12
    char __tail_16[6];  // 0x16
    // dup-member: unsigned int GetKeyState;
    // dup-member: unsigned int IsButtonDown;
    // dup-member: unsigned int ReleaseCapture;
    int SetBounds(const void *aP1, void *a2 = 0);  // 0x4A8BF0
    int SetCursor(int aP1, char aP2, void *a3 = 0);  // 0x5BDC80
    HWND ReleaseCapture(void *a1 = 0);  // 0x6938C0
    void DrawCursor(int * aP1, int aP2, int a4);
    SHORT GetKeyState(uint8_t vKey);  // 0x53EC90
    static BOOL IsButtonDown(unsigned char a1);  // 0x54F5C0
    static HWND HideWindow();  // 0x5BC400
};
} // namespace gamemd
