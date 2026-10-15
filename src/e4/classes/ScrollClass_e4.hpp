// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ScrollClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
int m_ScrollY;  // 0x4 [X35-L7 kind=int]
int m_MaxX;  // 0x8 [X35-L7 kind=int]
    char m_MaxY[4];  // 0xC
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    char * Read(char * Block, char a2, void *a3 = 0);
    int Scroll(int * a1, MouseClass * aP2);
};

} // namespace gamemd
