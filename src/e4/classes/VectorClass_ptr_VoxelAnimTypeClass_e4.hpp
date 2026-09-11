// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_VoxelAnimTypeClass {
    void* vfptr;  // minimal E2 declaration
    DynamicVector * Constructor_VectorClass_VoxelAnimTypeClass___(char a2);  // 0x4F0B60
    DynamicVector * Constructor_VectorClass_IsometricTileTypeClass___(char a2);  // 0x4F0C00
    void Destroy();  // 0x4E8FC0
    unsigned int GetItemIndex(int a2);  // 0x4E8FF0
    int Get(int a2);  // 0x4E9010
    void Destroy_0();  // 0x4E9020
    unsigned int GetItemIndex_0(int a2);  // 0x4E9050
    char Add(int a2);  // 0x4EE6A0
    char Release(int a2, unsigned int * a3);  // 0x4EE6E0
    void Remove();  // 0x4EE790
    int GetSize(unsigned int * a2);  // 0x4EE7C0
    unsigned int LoadTypeData(int a2);  // 0x4EE800
    char SetCapacity(int a2, unsigned int * a3);  // 0x4EE820
    int FindItemIndex(unsigned int * a2);  // 0x4EE8D0
    char SetCapacity_0(int a2, unsigned int * a3);  // 0x4EEA80
    int FindItemIndex_0(unsigned int * a2);  // 0x4EEB30
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x4F0B10
};
} // namespace gamemd
