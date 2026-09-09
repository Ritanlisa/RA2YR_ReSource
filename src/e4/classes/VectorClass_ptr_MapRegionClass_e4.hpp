// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_MapRegionClass {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x5AC3A0
    unsigned int GetItemIndex(int a2);  // 0x5AC3D0
    int Get(int a2);  // 0x5AC3F0
    char Add(int a2);  // 0x5AC6A0
    char Release(int a2, unsigned int * a3);  // 0x5AC6E0
    void Remove();  // 0x5AC790
    int GetSize(unsigned int * a2);  // 0x5AC7C0
    unsigned int GetCapacity(int a2);  // 0x5AC800
    char SetCapacity(int a2, unsigned int * a3);  // 0x5AC820
    int FindItemIndex(unsigned int * a2);  // 0x5AC8D0
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x5AD390
    unsigned int * loc_5AD3E0(unsigned int * Block, char a2);  // 0x5AD3E0
};
} // namespace gamemd
