// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct RawFileClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    int FilePointer;  // 0x4
    int FileSize;  // 0x8
    void* Handle;  // 0xC
    unsigned int FileName;  // 0x10
    unsigned int u32_11;  // 0x11
    char FileTimeDateLo[2];  // 0x14
    char FileTimeDateHi[2];  // 0x16
    bool FileNameAllocated;  // 0x18
    unsigned char tail_19;  // 0x19
// --- flat members (END) ---
    int Close(int a2, int a3);
    void Dtor();
    static double Construct(...);  // C2597 interim stub
};

} // namespace gamemd
