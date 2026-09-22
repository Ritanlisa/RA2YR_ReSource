// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_BulletClass {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x46B5E0
    unsigned int GetItemIndex(int a2);  // 0x46B610
    int Get(int a2);  // 0x46B630
    char Add(int a2);  // 0x46B660
    char Release(int a2, unsigned int * a3);  // 0x46B6A0
    void Remove();  // 0x46B750
    int GetSize(unsigned int * a2);  // 0x46B780
    unsigned int GetCapacity(int a2);  // 0x46B7C0
    char SetCapacity(int a2, unsigned int * a3);  // 0x46B7E0
    int FindItemIndex(unsigned int * a2);  // 0x46B890
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x46B8C0
    unsigned int * loc_46B910(unsigned int * Block, char a2);  // 0x46B910
    LONG GetItem(int a1);  // 0x46B990
    LONG GetItem_0(int a1);  // 0x46B9A0
};
} // namespace gamemd
