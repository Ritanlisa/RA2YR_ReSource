// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_rc_ptr_WDTTerritory {
    void* vfptr;  // minimal E2 declaration
    char Release(int a2, unsigned int * a3);  // 0x76B8C0
    unsigned int * loc_76B6C0(char a2);  // 0x76B6C0
    unsigned int * Clear(unsigned int * a2, int a3);  // 0x76B760
    char AddRef(int a2);  // 0x76B870
    int ddtor();  // 0x76B9E0
    int GetSize(int a2);  // 0x76BA10
    unsigned int GetCapacity(int a2);  // 0x76BA50
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x76BBC0
};
} // namespace gamemd
