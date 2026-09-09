// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_WeaponTypeClass {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x40FBB0
    unsigned int GetItemIndex(int a2);  // 0x40FBE0
    int Get(int a2);  // 0x40FC00
    char Add(int a2);  // 0x40FC10
    char Release(int a2, unsigned int * a3);  // 0x40FC50
    void Remove();  // 0x40FD00
    int GetSize(unsigned int * a2);  // 0x40FD30
    unsigned int LoadTypeData(int a2);  // 0x40FD70
    char SetCapacity(int a2, unsigned int * a3);  // 0x40FD90
    int FindItemIndex(unsigned int * a2);  // 0x40FE40
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x40FE70
};
} // namespace gamemd
