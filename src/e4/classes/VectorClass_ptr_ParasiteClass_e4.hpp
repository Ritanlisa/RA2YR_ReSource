// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_ParasiteClass {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x62B070
    unsigned int GetItemIndex(int a2);  // 0x62B0A0
    int Get(int a2);  // 0x62B0C0
    char Add(int a2);  // 0x62B0D0
    char Release(int a2, unsigned int * a3);  // 0x62B110
    void Remove();  // 0x62B1C0
    int GetSize(unsigned int * a2);  // 0x62B1F0
    unsigned int GetCapacity(int a2);  // 0x62B230
    char SetCapacity(int a2, unsigned int * a3);  // 0x62B250
    int FindItemIndex(unsigned int * a2);  // 0x62B300
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x62B330
};
} // namespace gamemd
