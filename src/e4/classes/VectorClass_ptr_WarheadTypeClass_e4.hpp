// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_WarheadTypeClass {
    void* vfptr;  // minimal E2 declaration
    DynamicVector * Constructor_VectorClass_WarheadTypeClass___(char a2);  // 0x40F8F0
    void Destroy();  // 0x40F5E0
    unsigned int GetItemIndex(int a2);  // 0x40F610
    int Get(int a2);  // 0x40F630
    char Add(int a2);  // 0x40F640
    char Release(int a2, unsigned int * a3);  // 0x40F680
    void Remove();  // 0x40F730
    int GetSize(unsigned int * a2);  // 0x40F760
    unsigned int LoadTypeData(int a2);  // 0x40F7A0
    char SetCapacity(int a2, unsigned int * a3);  // 0x40F7C0
    int FindItemIndex(unsigned int * a2);  // 0x40F870
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x40F8A0
};
} // namespace gamemd
