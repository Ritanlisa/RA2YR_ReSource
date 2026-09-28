// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Buffer {
// --- flat members (BEGIN) ---
    unsigned int Buffer_field_00;  // 0x0
    unsigned int Buffer_field_04;  // 0x4
    unsigned int Buffer_field_08;  // 0x8
    unsigned int Buffer_field_0C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned int Buffer_field_10;  // 0x10
    unsigned int Buffer_field_14;  // 0x14
    unsigned int Buffer_field_18;  // 0x18
    unsigned int Buffer_field_1C;  // 0x1C
    unsigned int Buffer_field_20;  // 0x20
    unsigned int Buffer_field_24;  // 0x24
// --- flat members (END) ---
    DynamicVector * Constructor_VectorClass_ObjectClass___(char a2);
    int * RotateBufferCrypto(int * a2, int a3);
    int AllocateCodecFrameBuffers();
    int AppendCellData(AbstractClass * aP1, int a3);
    unsigned int * Init(int a2, AbstractClass * aP2);
    void * FillCircularBufferScroll2(int a2, MouseClass * aP2, unsigned short a4);
};

} // namespace gamemd
