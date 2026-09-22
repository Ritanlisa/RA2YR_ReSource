// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass {
    void* vfptr;  // minimal E2 declaration
    VectorClass * QueryInterface(char a2);  // 0x54A7B0
    DynamicVector * Constructor(char a2);  // 0x54A800
    void Destroy();  // 0x54A1F0
    unsigned int GetItemIndex(int a2);  // 0x54A220
    int Get(int a2);  // 0x54A240
    char Add(int a2);  // 0x54A4B0
    char Release(int a2, unsigned int * a3);  // 0x54A4F0
    void Remove();  // 0x54A5A0
    int GetSize(unsigned int * a2);  // 0x54A5D0
    unsigned int LoadTypeData(int a2);  // 0x54A610
    char SetCapacity(int a2, unsigned int * a3);  // 0x54A630
    int FindItemIndex(unsigned int * a2);  // 0x54A6E0
};
} // namespace gamemd
