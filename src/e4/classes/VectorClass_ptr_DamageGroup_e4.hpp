// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_DamageGroup {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x48AD10
    unsigned int GetItemIndex(int a2);  // 0x48AD40
    int Clear(int a2);  // 0x48AD60
    char AddRef(int a2);  // 0x48AD70
    char Remove(int a2, unsigned int * a3);  // 0x48ADB0
    void ddtor();  // 0x48AE60
    int GetSize(unsigned int * a2);  // 0x48AE90
    unsigned int Get(int a2);  // 0x48AED0
    char SetCapacity(int a2, unsigned int * a3);  // 0x48AEF0
    int FindItemIndex(unsigned int * a2);  // 0x48AFA0
    VectorClass * Add(unsigned int * Block, char a2);  // 0x48AFD0
    DynamicVector * Constructor_VectorClass_DamageGroup___(unsigned int * Block, char a2);  // 0x48B020
};
} // namespace gamemd
