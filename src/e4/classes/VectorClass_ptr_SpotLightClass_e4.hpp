// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_SpotLightClass {
    void* vfptr;  // minimal E2 declaration
    unsigned int GetItemIndex(int a2);  // 0x5FFFF0
    int Get(int a2);  // 0x600010
    char Add(int a2);  // 0x600020
    char Release(int a2, unsigned int * a3);  // 0x600060
    void Remove();  // 0x600110
    int GetSize(unsigned int * a2);  // 0x600140
    unsigned int GetCapacity(int a2);  // 0x600180
    char SetCapacity(int a2, unsigned int * a3);  // 0x6001A0
    int FindItemIndex(unsigned int * a2);  // 0x600250
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x600280
};
} // namespace gamemd
