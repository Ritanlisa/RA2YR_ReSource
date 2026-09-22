// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_UtagCONNECTDATA {
    void* vfptr;  // minimal E2 declaration
    DynamicVector * Constructor_VectorClass_tagCONNECTDATA_(unsigned int * Block, char a2);  // 0x4A0E10
    void Destroy();  // 0x4A0EB0
    unsigned int GetItemIndex(int a2);  // 0x4A0EE0
    unsigned int * Clear(unsigned int * a2, int a3);  // 0x4A0F00
    char AddRef(int a2);  // 0x4A0F80
    char Release(int a2, unsigned int * a3);  // 0x4A0FE0
    int GetSize(unsigned int * a2);  // 0x4A10D0
    unsigned int GetCapacity(int a2);  // 0x4A1120
    char SetCapacity(int a2, unsigned int * a3);  // 0x4A1140
    int FindItemIndex(unsigned int * a2);  // 0x4A1200
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x4A14A0
};
} // namespace gamemd
