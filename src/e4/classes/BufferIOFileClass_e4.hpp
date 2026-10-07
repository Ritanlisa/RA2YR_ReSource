// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BufferIOFileClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    int FilePointer;  // 0x4
    int FileSize;  // 0x8
    void * Handle;  // 0xC
    void * FileName;  // 0x10
    void* FileTimeDateLo;  // 0x14
    char FileNameAllocated;  // 0x18
    bool CacheReadAhead;  // 0x20
    unsigned int BufferOffset;  // 0x24
    unsigned int BufferSize;  // 0x28
    unsigned int u32_29;  // 0x29
    unsigned int RawFileClass;
// --- flat members (END) ---
    int Destruct();  // def-aligned
    void StubReturnFalse(int a1, int a2, int a3);
     unsigned __int8 * Constructor();  // G57w10-S raw 0x00431B20 (was C2597 interim stub)
int Dtor();
};

} // namespace gamemd
