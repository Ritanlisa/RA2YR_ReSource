// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_VoxelAnimClass {
    void* vfptr;  // minimal E2 declaration
    DynamicVector * Constructor_VectorClass_VoxelAnimClass___(char a2);  // 0x40F1D0
    void Destroy();  // 0x40EEC0
    unsigned int GetItemIndex(int a2);  // 0x40EEF0
    int Get(int a2);  // 0x40EF10
    char Add(int a2);  // 0x40EF20
    char Release(int a2, unsigned int * a3);  // 0x40EF60
    void Remove();  // 0x40F010
    int GetSize(unsigned int * a2);  // 0x40F040
    unsigned int GetCapacity(int a2);  // 0x40F080
    char SetCapacity(int a2, unsigned int * a3);  // 0x40F0A0
    int FindItemIndex(unsigned int * a2);  // 0x40F150
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x40F180
};
} // namespace gamemd
