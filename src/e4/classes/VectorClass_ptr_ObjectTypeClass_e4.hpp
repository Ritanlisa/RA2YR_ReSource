// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_ObjectTypeClass {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x5F9B00
    unsigned int GetItemIndex(int a2);  // 0x5F9B30
    int Get(int a2);  // 0x5F9B50
    char Add(int a2);  // 0x5F9B80
    char Release(int a2, unsigned int * a3);  // 0x5F9BC0
    void Remove();  // 0x5F9C70
    int GetSize(unsigned int * a2);  // 0x5F9CA0
    unsigned int LoadTypeData(int a2);  // 0x5F9CE0
    char SetCapacity(int a2, unsigned int * a3);  // 0x5F9D00
    int FindItemIndex(unsigned int * a2);  // 0x5F9DB0
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x5F9DE0
};
} // namespace gamemd
