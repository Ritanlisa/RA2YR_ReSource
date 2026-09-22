// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_LightSourceClass {
    void* vfptr;  // minimal E2 declaration
    DynamicVector * Constructor_VectorClass_LightSourceClass___(char a2);  // 0x5557D0
    void Destroy();  // 0x555200
    unsigned int GetItemIndex(int a2);  // 0x555230
    int Get(int a2);  // 0x555250
    void Destroy_0();  // 0x555260
    unsigned int GetItemIndex_0(int a2);  // 0x555290
    char Add(int a2);  // 0x5552C0
    char Release(int a2, unsigned int * a3);  // 0x555300
    void Remove();  // 0x5553B0
    int GetSize(unsigned int * a2);  // 0x5553E0
    unsigned int GetCapacity(int a2);  // 0x555420
    char SetCapacity(int a2, unsigned int * a3);  // 0x555440
    int FindItemIndex(unsigned int * a2);  // 0x5554F0
    char SetCapacity_0(int a2, unsigned int * a3);  // 0x5556A0
    int FindItemIndex_0(unsigned int * a2);  // 0x555750
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x555780
    DynamicVector * Constructor(unsigned int * Block, char a2);  // 0x555870
};
} // namespace gamemd
