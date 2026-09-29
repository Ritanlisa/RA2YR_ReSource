// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BSurface {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* Width;  // 0x4
    int Height;  // 0x8
    bool q00A;  // 0xA
    bool q00B;  // 0xB
    int LockCount;  // 0xC
    int BytesPerPixel;  // 0x10
    unsigned char* Buffer;  // 0x14
    unsigned int XSurface;
    unsigned int q0188;
    unsigned int q044;
    unsigned int u32_18;
    unsigned int u32_1C;
    unsigned int u32_24;
    unsigned int u32_4;
// --- flat members (END) ---
    unsigned int * Construct(int a2,  int a3,  int a4,  int a5);    // 0x410CE0
    bool CreateTripleBuffer();  // 0x7B8C60
    unsigned int * ConstructEx(int a2,  int a3,  int a4,  int a5);    // 0x7BC970
    int GetBytesPerPixel();  // 0x411630
    int GetPitch();  // 0x411640
    BSurface * ScalarDtor(char a2);  // 0x411650
};
} // namespace gamemd
