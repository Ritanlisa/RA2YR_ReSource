// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_RadarEventClass {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x660C80
    unsigned int GetItemIndex(int a2);  // 0x660CB0
    int Get(int a2);  // 0x660CD0
    char Add(int a2);  // 0x660CE0
    char Release(int a2, unsigned int * a3);  // 0x660D20
    void Remove();  // 0x660DD0
    int GetSize(unsigned int * a2);  // 0x660E00
    unsigned int GetCapacity(int a2);  // 0x660E40
    char SetCapacity(int a2, unsigned int * a3);  // 0x660E60
    int FindItemIndex(unsigned int * a2);  // 0x660F50
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x660F80
    unsigned int * loc_660FD0(unsigned int * Block, char a2);  // 0x660FD0
};
} // namespace gamemd
