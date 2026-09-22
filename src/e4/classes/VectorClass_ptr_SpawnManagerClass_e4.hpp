// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_SpawnManagerClass {
    void* vfptr;  // minimal E2 declaration
    DynamicVector * Constructor_VectorClass_SpawnManagerClass___(char a2);  // 0x6B8830
    void Destroy();  // 0x6B81C0
    unsigned int GetItemIndex(int a2);  // 0x6B81F0
    int Get(int a2);  // 0x6B8210
    char Add(int a2);  // 0x6B84E0
    char Release(int a2, unsigned int * a3);  // 0x6B8520
    void Remove();  // 0x6B85D0
    int GetSize(unsigned int * a2);  // 0x6B8600
    unsigned int GetCapacity(int a2);  // 0x6B8640
    char SetCapacity(int a2, unsigned int * a3);  // 0x6B8660
    int FindItemIndex(unsigned int * a2);  // 0x6B8710
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x6B87E0
};
} // namespace gamemd
