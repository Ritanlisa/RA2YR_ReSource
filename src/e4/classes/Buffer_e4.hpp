// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Buffer {
// --- flat members (BEGIN) ---
    void *q0;  // 0x0
    void *q4;  // 0x4
    unsigned int Buffer_field_08;  // 0x8
    unsigned int Buffer_field_0C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned int Buffer_field_10;  // 0x10
    unsigned int Buffer_field_14;  // 0x14
    unsigned int Buffer_field_18;  // 0x18
    unsigned int Buffer_field_1C;  // 0x1C
    unsigned int Buffer_field_20;  // 0x20
    unsigned int Buffer_field_24;  // 0x24
    unsigned int Buffer_field_184;
    unsigned int Buffer_field_188;
    unsigned int Items;
    unsigned int q008;
    unsigned int q030;
    unsigned int q744;
    unsigned int q748;
    unsigned int u32_1CF0;
    unsigned int u32_28;
    unsigned int u32_2C;
    unsigned int u32_2E42;
    unsigned int u32_88;
    unsigned int Buffer_field_00;
    unsigned int Buffer_field_04;
// --- flat members (END) ---
    DynamicVector * Constructor_VectorClass_ObjectClass___(char a2);
    int * RotateBufferCrypto(int * a2, int a3);
    int AllocateCodecFrameBuffers();
    int AppendCellData(void * aP1, int a3);
    unsigned int * Init(int a2, void * aP2, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0);
    void * FillCircularBufferScroll2(int a2, void * aP2, unsigned short a4);
};

} // namespace gamemd
