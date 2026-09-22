// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_EgoClass {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x4C49A0
    unsigned int GetItemIndex(int a2);  // 0x4C49D0
    int Get(int a2);  // 0x4C49F0
    char Add(int a2);  // 0x4C4A00
    char Release(int a2, unsigned int * a3);  // 0x4C4A40
    void Remove();  // 0x4C4AF0
    int GetSize(unsigned int * a2);  // 0x4C4B20
    unsigned int GetCapacity(int a2);  // 0x4C4B60
    char SetCapacity(int a2, unsigned int * a3);  // 0x4C4B80
    int FindItemIndex(unsigned int * a2);  // 0x4C4C30
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x4C4C60
    DynamicVector * Constructor_VectorClass_EgoClass___(unsigned int * Block, char a2);  // 0x4C4CB0
};
} // namespace gamemd
