// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SwizzleManagerClass_19 {
    void* vfptr;  // minimal E2 declaration
    char Release(int a2, unsigned int * a3);  // 0x6CF5A0
    char SetCapacity(int a2, unsigned int * a3);  // 0x6CF720
    void ClearBuffer();  // 0x6CF4F0
    unsigned int * Lookup(unsigned int * a2, int a3);  // 0x6CF540
    char AddRef(int a2);  // 0x6CF560
    void ddtor();  // 0x6CF690
    int Init(unsigned int * a2);  // 0x6CF6C0
    int FindItem(unsigned int * a2);  // 0x6CF820
    VectorClass * QueryInterface(char a2);  // 0x6CF850
    DynamicVector * Constructor_VectorClass_SwizzlePointerClass_(char a2);  // 0x6CF8A0
    unsigned int PointerToIndex(int a2);  // 0x6CF520
    unsigned int Add(int a2);  // 0x6CF700
};
} // namespace gamemd
