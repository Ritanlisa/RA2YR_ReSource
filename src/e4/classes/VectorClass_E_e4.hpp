// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_E {
    void* vfptr;  // minimal E2 declaration
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x74BFA0
    char Release(signed int Size, char * a3);  // 0x74C030
    void ddtor();  // 0x74C0E0
    char Clear(int a2);  // 0x74BF90
    char AddRef(int a2);  // 0x74BFF0
    int GetSize(unsigned char * a2);  // 0x74C110
    int GetCapacity(int a2);  // 0x74C150
};
} // namespace gamemd
