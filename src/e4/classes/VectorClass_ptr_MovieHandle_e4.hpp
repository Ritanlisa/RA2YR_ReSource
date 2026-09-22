// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_MovieHandle {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x75A430
    unsigned int GetItemIndex(int a2);  // 0x75A460
    int Get(int a2);  // 0x75A480
    char Add(int a2);  // 0x75A490
    char Release(int a2, unsigned int * a3);  // 0x75A4D0
    void Remove();  // 0x75A580
    int GetSize(unsigned int * a2);  // 0x75A5B0
    unsigned int GetCapacity(int a2);  // 0x75A5F0
    char SetCapacity(int a2, unsigned int * a3);  // 0x75A610
    int FindItemIndex(unsigned int * a2);  // 0x75A6C0
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x75A6F0
    DynamicVector * Constructor_VectorClass_MovieHandle___(unsigned int * Block, char a2);  // 0x75A740
};
} // namespace gamemd
