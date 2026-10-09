// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct _e4 {
    void* vfptr;
    unsigned int u32_4;  // 0x4
    AbstractClass * ptr_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_30;  // 0x30
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);
    char AddRef(int a2);
    char Release(int a2, unsigned int * a3);
    int Read(unsigned int * a2);
    int Seek(int a2);
    unsigned int Write(int a2);
    wchar_t * ddtor();
};

} // namespace gamemd
