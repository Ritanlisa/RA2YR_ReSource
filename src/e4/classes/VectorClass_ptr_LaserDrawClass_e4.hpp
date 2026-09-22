// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_LaserDrawClass {
    void* vfptr;  // minimal E2 declaration
    DynamicVector * Constructor_VectorClass_LaserDrawClass___(char a2);  // 0x5515E0
    void Destroy();  // 0x5512D0
    unsigned int GetItemIndex(int a2);  // 0x551300
    int Get(int a2);  // 0x551320
    char Add(int a2);  // 0x551330
    char Release(int a2, unsigned int * a3);  // 0x551370
    void Remove();  // 0x551420
    int GetSize(unsigned int * a2);  // 0x551450
    unsigned int GetCapacity(int a2);  // 0x551490
    char SetCapacity(int a2, unsigned int * a3);  // 0x5514B0
    int FindItemIndex(unsigned int * a2);  // 0x551560
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x551590
};
} // namespace gamemd
