// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BSurface {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* Width;  // 0x4
    int Height;  // 0x8
    int LockCount;  // 0xC
    int BytesPerPixel;  // 0x10
    unsigned char* Buffer;  // 0x14
// --- flat members (END) ---
    unsigned int *  Construct(int a2, int a3, int a4, int a5, void *a1 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);  // 0x410CE0
    bool CreateTripleBuffer(void *a1 = 0);  // 0x7B8C60
    unsigned int *  ConstructEx(int a2, int a3, int a4, int a5);  // 0x7BC970
    int GetBytesPerPixel();  // 0x411630
    int GetPitch();  // 0x411640
    BSurface *  ScalarDtor(char a2);  // 0x411650
    char Stub(int a1, int a2);
    unsigned int q_4;  // +0x4 flat supply (P5 provenance)
    unsigned int q058;  // @0x7b8cd9 (W16G3 raw-usage vocab)
    unsigned int u32_6C;  // @0x7b8d16 (W16G3 raw-usage vocab)
    void * ptr_24;  // 0x24 (offset-truth)
    unsigned char q00C6;  // 0xC6 (offset-truth)
    unsigned int q0188;  // 0x188 (offset-truth)
    unsigned int q0208;  // 0x208 (offset-truth)
    unsigned char q044;  // 0x44 (ml)
    unsigned int q06C;  // 0x6C (offset-truth)
    unsigned int u32_18;  // 0x18 (offset-truth)
    unsigned int u32_1C;  // 0x1C (offset-truth)
    unsigned int u32_24;  // 0x24 (offset-truth)
    unsigned int u32_288;  // 0x288 (offset-truth)
    unsigned int u32_4;  // 0x4 (offset-truth)
    static double XSurface(...);  // plateau: C2039/C3861 stub
    static double u32_28(...);  // plateau: C2039/C3861 stub
    static double u32_2C(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
