// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_ConvertClass {
    void* vfptr;  // minimal E2 declaration
    ConvertClass * Constructor_ConvertClass(char a2);  // 0x491210
    void MarkDirty();  // 0x4E1960
    void Destroy();  // 0x491390
    unsigned int GetItemIndex(int a2);  // 0x4913C0
    int Get(int a2);  // 0x4913E0
    char Add(int a2);  // 0x49AE80
    char Release(int a2, unsigned int * a3);  // 0x49AEC0
    void Remove();  // 0x49AF70
    int GetSize(unsigned int * a2);  // 0x49AFA0
    unsigned int GetCapacity(int a2);  // 0x49AFE0
    char SetCapacity(int a2, unsigned int * a3);  // 0x49B000
    int FindItemIndex(unsigned int * a2);  // 0x49B0B0
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x49B0E0
    DynamicVector * Constructor_VectorClass_ConvertClass___(unsigned int * Block, char a2);  // 0x49B130
};
} // namespace gamemd
