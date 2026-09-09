// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_ThemeControl {
    void* vfptr;  // minimal E2 declaration
    int Clear(int a2);  // 0x4E8530
    char AddRef(int a2);  // 0x4EA2A0
    char Remove(int a2, unsigned int * a3);  // 0x4EA2E0
    void ddtor();  // 0x4EA390
    int GetSize(unsigned int * a2);  // 0x4EA3C0
    unsigned int Get(int a2);  // 0x4EA400
    VectorClass * Add(unsigned int * Block, char a2);  // 0x4EF940
    void Destroy();  // 0x7212B0
    unsigned int GetItemIndex(int a2);  // 0x7212E0
    char SetCapacity(int a2, unsigned int * a3);  // 0x721300
    int FindItemIndex(unsigned int * a2);  // 0x7213B0
    DynamicVector * Constructor_VectorClass_ThemeControl___(unsigned int * Block, char a2);  // 0x7213E0
};
} // namespace gamemd
