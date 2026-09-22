// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_UScoutStruct {
    void* vfptr;  // minimal E2 declaration
    int Clear(int a2, int a3);  // 0x50E620
    char AddRef(int a2);  // 0x50F1B0
    char Release(int a2, char * a3);  // 0x50F210
    void ddtor();  // 0x50F300
    int GetSize(int a2);  // 0x50F330
    unsigned int GetCapacity(int a2);  // 0x50F380
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x5101D0
};
} // namespace gamemd
