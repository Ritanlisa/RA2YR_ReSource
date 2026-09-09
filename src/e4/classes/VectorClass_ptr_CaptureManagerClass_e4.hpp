// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_CaptureManagerClass {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x472AE0
    unsigned int GetItemIndex(int a2);  // 0x472B10
    int Get(int a2);  // 0x472B30
    char Add(int a2);  // 0x472DA0
    char Release(int a2, unsigned int * a3);  // 0x472DE0
    void Remove();  // 0x472E90
    int GetSize(unsigned int * a2);  // 0x472EC0
    unsigned int GetCapacity(int a2);  // 0x472F00
    char SetCapacity(int a2, unsigned int * a3);  // 0x472F20
    int FindItemIndex(unsigned int * a2);  // 0x472FD0
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x4730A0
};
} // namespace gamemd
