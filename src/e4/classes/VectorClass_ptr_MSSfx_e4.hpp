// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_MSSfx {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x5D2720
    unsigned int GetItemIndex(int a2);  // 0x5D2750
    int Get(int a2);  // 0x5D27D0
    char FindItemIndex(int a2);  // 0x5D27E0
    char SetCapacity(int a2, unsigned int * a3);  // 0x5D2820
    void Destroy_0();  // 0x5D28D0
    char SetCapacity_0(int a2, unsigned int * a3);  // 0x5D2960
    int FindItemIndex_0(unsigned int * a2);  // 0x5D2A10
    char Add(int a2);  // 0x5D2A40
    char Release(int a2, unsigned int * a3);  // 0x5D2A80
    void Remove();  // 0x5D2B30
    int GetSize(unsigned int * a2);  // 0x5D2B60
    unsigned int GetCapacity(int a2);  // 0x5D2BA0
    DynamicVector * Constructor_VectorClass_MSAnim___(unsigned int * Block, char a2);  // 0x5D2CF0
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x5D2D40
};
} // namespace gamemd
