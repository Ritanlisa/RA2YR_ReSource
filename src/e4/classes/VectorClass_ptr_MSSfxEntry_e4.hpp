// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_MSSfxEntry {
    void* vfptr;  // minimal E2 declaration
    int Get(int a2);  // 0x5D07E0
    char Add(int a2);  // 0x5D1460
    char Release(int a2, unsigned int * a3);  // 0x5D14A0
    void Remove();  // 0x5D1550
    int GetSize(unsigned int * a2);  // 0x5D1580
    unsigned int GetCapacity(int a2);  // 0x5D15C0
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x5D19E0
};
} // namespace gamemd
