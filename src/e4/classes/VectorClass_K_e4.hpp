// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_K {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x6BED50
    unsigned int GetItemIndex(int a2);  // 0x6BED80
    int Clear(int a2);  // 0x6BEDA0
    char AddRef(int a2);  // 0x6C61D0
    char Release(int a2, unsigned int * a3);  // 0x6C6210
    void ddtor();  // 0x6C62C0
    int GetSize(unsigned int * a2);  // 0x6C62F0
    unsigned int GetCapacity(int a2);  // 0x6C6330
    char SetCapacity(int a2, unsigned int * a3);  // 0x6C6350
    int FindItemIndex(unsigned int * a2);  // 0x6C6450
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x6C6480
    DynamicVector * Constructor(unsigned int * Block, char a2);  // 0x6C64D0
};
} // namespace gamemd
