// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Mouse {
    char __pad_0[1];  // 0x0
    char q001[4];  // 0x1
    char __pad_5[3];  // 0x5
    unsigned char u32_8;  // 0x8
    char __pad_9[3];  // 0x9
    char __pad_C[6];  // 0xC
    char m_12[4];  // 0x12
    char __tail_16[6];  // 0x16
    char __pad_1C[44];  // 0x1C
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int u32_50;  // 0x50
    unsigned int u32_54;  // 0x54
    char __pad_58[4380];  // 0x58
    unsigned short u32_1174;  // 0x1174
    unsigned short u32_1176;  // 0x1176
    unsigned short u32_1178;  // 0x1178
    unsigned short u32_117A;  // 0x117A
    unsigned int u32_117C;  // 0x117C
    char __pad_1180[17370];  // 0x1180
    unsigned char u32_555A;  // 0x555A
    char __pad_555B[1];  // 0x555B
    unsigned char u32_555C;  // 0x555C
    char __pad_555D[3];  // 0x555D
    unsigned int u32_5560;  // 0x5560
    char __pad_5564[4];  // 0x5564
    unsigned int u32_5568;  // 0x5568
    // dup-member: unsigned int GetKeyState;
    // dup-member: unsigned int IsButtonDown;
    // dup-member: unsigned int ReleaseCapture;
    int SetBounds(const void *aP1, void *a2 = 0);  // 0x4A8BF0
    int SetCursor(int aP1, char aP2, void *a3 = 0);  // 0x5BDC80
    int ReleaseCapture();  // 0x6938C0
    void DrawCursor(int * aP1, int aP2, int a4);
    SHORT GetKeyState(uint8_t vKey);  // 0x53EC90
    static BOOL IsButtonDown(unsigned char a1);  // 0x54F5C0
    static HWND HideWindow();  // 0x5BC400
};
} // namespace gamemd
