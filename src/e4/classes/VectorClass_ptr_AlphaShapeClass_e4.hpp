// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_AlphaShapeClass {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x421800
    unsigned int GetItemIndex(int a2);  // 0x421830
    int Get(int a2);  // 0x421850
    char Add(int a2);  // 0x421860
    char Release(int a2, unsigned int * a3);  // 0x4218A0
    void Remove();  // 0x421950
    int GetSize(unsigned int * a2);  // 0x421980
    unsigned int GetCapacity(int a2);  // 0x4219C0
    char SetCapacity(int a2, unsigned int * a3);  // 0x4219E0
    int FindItemIndex(unsigned int * a2);  // 0x421A90
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x421AC0
    unsigned int * loc_421B10(unsigned int * Block, char a2);  // 0x421B10
};
} // namespace gamemd
