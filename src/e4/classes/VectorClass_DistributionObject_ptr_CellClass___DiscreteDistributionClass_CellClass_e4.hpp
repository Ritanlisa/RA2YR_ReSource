// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass {
    void* vfptr;  // minimal E2 declaration
    char Release(int a2, int * a3);  // 0x4E0840
    char SetCapacity(int a2, int * a3);  // 0x4E0B10
    char AddRef(int a2);  // 0x4E07E0
    int FindItemIndex(unsigned int * a2);  // 0x4E0CA0
    VectorClass * QueryInterface(char a2);  // 0x4E0D80
    DynamicVector * Constructor(char a2);  // 0x4E0E20
    unsigned int * Clear(unsigned int * a2, int a3);  // 0x4E0250
    unsigned int GetCapacity(int a2);  // 0x4E09E0
    void Destroy();  // 0x4E0AB0
    unsigned int GetItemIndex(int a2);  // 0x4E0AF0
    void ddtor();  // 0x4E0950
};
} // namespace gamemd
