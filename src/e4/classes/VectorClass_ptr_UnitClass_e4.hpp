// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_UnitClass {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x4E88A0
    unsigned int GetItemIndex(int a2);  // 0x4E88D0
    int Get(int a2);  // 0x4E88F0
    void Destroy_0();  // 0x4E8900
    unsigned int GetItemIndex_0(int a2);  // 0x4E8930
    char Add(int a2);  // 0x4EB980
    char Release(int a2, unsigned int * a3);  // 0x4EB9C0
    void Remove();  // 0x4EBA70
    int GetSize(unsigned int * a2);  // 0x4EBAA0
    unsigned int GetCapacity(int a2);  // 0x4EBAE0
    char SetCapacity(int a2, unsigned int * a3);  // 0x4EBB00
    int FindItemIndex(unsigned int * a2);  // 0x4EBBB0
    char SetCapacity_0(int a2, unsigned int * a3);  // 0x4EBD60
    int FindItemIndex_0(unsigned int * a2);  // 0x4EBE10
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x4EFF30
    DynamicVector * Constructor_VectorClass_UnitClass___(unsigned int * Block, char a2);  // 0x4EFF80
    DynamicVector * Constructor_VectorClass_HouseClass___(unsigned int * Block, char a2);  // 0x4F0020
};
} // namespace gamemd
