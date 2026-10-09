// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ScrollClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char m_ScrollY[4];  // 0x4
    char m_MaxX[4];  // 0x8
    char m_MaxY[4];  // 0xC
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    short Read(char * Block, char a2);
    int Scroll(int * a1, MouseClass * aP2);
};

} // namespace gamemd
