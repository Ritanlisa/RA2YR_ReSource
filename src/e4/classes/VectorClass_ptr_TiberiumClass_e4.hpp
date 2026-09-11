// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_TiberiumClass {
    void* vfptr;  // minimal E2 declaration
    DynamicVector * Constructor_VectorClass_TiberiumClass___(char a2);  // 0x723A40
    void Destroy();  // 0x723730
    unsigned int GetItemIndex(int a2);  // 0x723760
    int Get(int a2);  // 0x723780
    char Add(int a2);  // 0x723790
    char Release(int a2, unsigned int * a3);  // 0x7237D0
    void Remove();  // 0x723880
    int GetSize(unsigned int * a2);  // 0x7238B0
    unsigned int GetCapacity(int a2);  // 0x7238F0
    char SetCapacity(int a2, unsigned int * a3);  // 0x723910
    int FindItemIndex(unsigned int * a2);  // 0x7239C0
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x7239F0
};
} // namespace gamemd
