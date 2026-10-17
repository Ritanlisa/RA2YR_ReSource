// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BSurface {
    int __pad_0;  // 0x0
    void* Width;  // 0x4
    int Height;  // 0x8
    void* LockCount;  // 0xC
    int BytesPerPixel;  // 0x10
    unsigned char* Buffer;  // 0x14
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
