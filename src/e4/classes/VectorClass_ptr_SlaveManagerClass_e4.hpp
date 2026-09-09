// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_SlaveManagerClass {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x6B1410
    unsigned int GetItemIndex(int a2);  // 0x6B1440
    int Get(int a2);  // 0x6B1460
    char Add(int a2);  // 0x6B16D0
    char Release(int a2, unsigned int * a3);  // 0x6B1710
    void Remove();  // 0x6B17C0
    int GetSize(unsigned int * a2);  // 0x6B17F0
    unsigned int GetCapacity(int a2);  // 0x6B1830
    char SetCapacity(int a2, unsigned int * a3);  // 0x6B1850
    int FindItemIndex(unsigned int * a2);  // 0x6B1900
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x6B19D0
};
} // namespace gamemd
