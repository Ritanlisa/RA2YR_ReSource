// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_EBolt {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x4C2C40
    unsigned int GetItemIndex(int a2);  // 0x4C2C70
    int Get(int a2);  // 0x4C2C90
    char Add(int a2);  // 0x4C2CA0
    char Release(int a2, unsigned int * a3);  // 0x4C2CE0
    void Remove();  // 0x4C2D90
    int GetSize(unsigned int * a2);  // 0x4C2DC0
    unsigned int GetCapacity(int a2);  // 0x4C2E00
    char SetCapacity(int a2, unsigned int * a3);  // 0x4C2E20
    int FindItemIndex(unsigned int * a2);  // 0x4C2ED0
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x4C2F00
    DynamicVector * Constructor_VectorClass_EBolt___(unsigned int * Block, char a2);  // 0x4C2F50
};
} // namespace gamemd
