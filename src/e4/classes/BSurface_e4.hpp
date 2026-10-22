// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BSurface {
    void * q000;  // 0x0
    int Width;  // 0x4
    int Height;  // 0x8
    int LockCount;  // 0xC
    int BytesPerPixel;  // 0x10
    void * Buffer;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    void * ptr_24;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    char __pad_30[20];  // 0x30
    unsigned int q044;  // 0x44
    char __pad_48[16];  // 0x48
    unsigned int q058;  // 0x58
    char __pad_5C[4];  // 0x5C
    unsigned int q060;  // 0x60
    char __pad_64[8];  // 0x64
    unsigned int q06C;  // 0x6C
    char __pad_70[32];  // 0x70
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * Construct(int a2, int a3, int v14, int a5, void *a5_2, void *a6_1, void *a7 = 0, void *a8 = 0, void *a9 = 0);  // 0x410CE0
    bool CreateTripleBuffer(void *a1 = 0);  // 0x7B8C60
    unsigned int *  ConstructEx(int a2, int a3, int a4, int a5);  // 0x7BC970
    int GetBytesPerPixel();  // 0x411630
    int GetPitch();  // 0x411640
    BSurface *  ScalarDtor(char a2);  // 0x411650
    char Stub(int a1, int a2);
};
} // namespace gamemd
