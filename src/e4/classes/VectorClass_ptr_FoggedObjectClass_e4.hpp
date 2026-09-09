// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_FoggedObjectClass {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x45A070
    unsigned int GetItemIndex(int a2);  // 0x45A0A0
    int Get(int a2);  // 0x45A0C0
    char Add(int a2);  // 0x45A640
    char SetCapacity(int a2, unsigned int * a3);  // 0x45A680
    int FindItemIndex(unsigned int * a2);  // 0x45A730
    char Release(int a2, unsigned int * a3);  // 0x45AB50
    void Remove();  // 0x45AC00
    int GetSize(unsigned int * a2);  // 0x45AC30
    unsigned int GetCapacity(int a2);  // 0x45AC70
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x45AC90
};
} // namespace gamemd
