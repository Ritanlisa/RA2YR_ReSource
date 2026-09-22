// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVectorClass_uint {
    void* vfptr;  // minimal E2 declaration
    void ddtor();  // 0x42D540
    int Clear(int a2);  // 0x42D590
    char AddRef(int a2);  // 0x42D600
    char SetCapacity(int a2, unsigned int * a3);  // 0x42D640
    void Clear_0();  // 0x42D6F0
    int FindItemIndex(unsigned int * a2);  // 0x42D720
    char Remove(int a2, unsigned int * a3);  // 0x42D780
    int GetSize(unsigned int * a2);  // 0x42D880
    VectorClass * Destructor(char a2);  // 0x42DB10
    DynamicVectorClass_uint * Add(char a2);  // 0x42DB60
    unsigned int GetCapacity(int a2);  // 0x42D760
};
} // namespace gamemd
