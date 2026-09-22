// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_TEventClass {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x71FBA0
    unsigned int GetItemIndex(int a2);  // 0x71FBD0
    int Get(int a2);  // 0x71FBF0
    char Add(int a2);  // 0x71FC00
    char Release(int a2, unsigned int * a3);  // 0x71FC40
    void Remove();  // 0x71FCF0
    int GetSize(unsigned int * a2);  // 0x71FD20
    unsigned int GetCapacity(int a2);  // 0x71FD60
    char SetCapacity(int a2, unsigned int * a3);  // 0x71FD80
    int FindItemIndex(unsigned int * a2);  // 0x71FE30
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x71FE60
    DynamicVector * Constructor_VectorClass_TEventClass___(unsigned int * Block, char a2);  // 0x71FEB0
};
} // namespace gamemd
